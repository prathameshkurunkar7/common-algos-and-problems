#include<iostream>
#include<algorithm>
using namespace std;
# define max_size 20

struct Item{
    int weight,value;
    float ratio;
};

void ratioCalculator(Item item)
{
    item.ratio = item.weight/item.value;
}

bool ratioComparator(Item i1, Item i2)
{
    return (i1.ratio > i2.ratio); // sorting with ratio in descending order
}


float knapsack(Item items[],int n,int capacity)
{
    sort(items,items+n,ratioComparator);
    int bag=0; // current weight
    float result=0.0;
    
    for (int i = 0; i < n; i++)
    {
        if(bag + items[i].weight <= capacity)
        {
            bag+=items[i].weight;
            result+=items[i].value;
        }
        else
        {
            int capacityLeft = capacity - bag; // capacity left
            float fraction = (float) capacityLeft/items[i].weight;
            result += items[i].value * fraction;
            break;
        }
    }
    
    return result;

}

int main()
{
    int n,capacity;
    struct Item items[max_size];
    
    cout<<"Enter the number of items: "<<endl;
    cin>>n;
    cout<<"Enter the capacity: "<<endl;
    cin>>capacity;

    if(n>max_size){
        cout<<"Please enter number of items less than "<<max_size;
        exit(0);
    }
    cout<<"Enter in following order: "<<endl;
    cout<<"Weight Value"<<endl;
    for (int i = 0; i < n; i++)
    cin>>items[i].weight>>items[i].value;
    
    for (int i = 0; i < n; i++)
    ratioCalculator(items[i]);
    
    cout<<"Resultant Value in Bag: "<<knapsack(items,n,capacity);

    return 0;
}