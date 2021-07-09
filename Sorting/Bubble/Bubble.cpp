#include<iostream>
using namespace std;

void bubble(int* arr,int n)
{
    // bubble sort
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //display array
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,arr[20];
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    if(n>20){
        cout<<"Please keep array size less than 20"<<endl;
        exit(0);
    }
    cout<<"Enter Elements to be sorted: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    bubble(arr,n);
    
    return 0;
}