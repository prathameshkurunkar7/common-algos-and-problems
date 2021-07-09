#include<iostream>
using namespace std;

// x is the element to be searched
int linearSearch(int* arr,int n,int x){
    int f=-1;
    for(int i=0;i<n;i++)
    {
        if(x==arr[i]) // if element to be searched is found in the list
        {
            f=1;
            break;
        }
    }
    return f;
}

int main(){
    int n,arr[20],x,res;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    if(n>20){
        cout<<"Please keep array size less than 20"<<endl;
        exit(0);
    }
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter Element to be Searched: "<<endl;
    cin>>x;

    res=linearSearch(arr,n,x);
    if(res==-1){
        cout<<"Could Not Find Entered Element in the list"<<endl;
    }else{
        cout<<"Element found in the list"<<endl;
    }

    return 0;
}