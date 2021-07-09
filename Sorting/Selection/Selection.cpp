#include<iostream>
using namespace std;
#define max 20

void selectionSort(int* data,int size)
{
    int min,temp;
    for(int i=0;i<size-1;i++)
    {
        min = i;
        for(int j=i+1;j<size;j++)
        {
            if(data[j]<data[min])
            min = j;
        }
        
        if(min!=i){     // avoiding extra swaps for repeated elements
            temp=data[i];
            data[i]=data[min];
            data[min]=temp;
        }
    }

    // display sorted elements
    for(int i=0;i<size;i++)
    cout<<data[i]<<" ";
}

int main()
{

    int size, data[max];
    cout<<"Enter no of Elements:"<<endl;
    cin>>size;
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<size;i++)
    cin>>data[i];

    selectionSort(data,size);
    
    return 0;
}