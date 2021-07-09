#include<iostream>
#include <algorithm>
using namespace std;

int binarySearch(int* a, int x,int n)
{
    int low=0;
    int high = n-1;
    int mid;

    while(low<=high){
        mid = (low + high)/2;
        if(a[mid]<x){
            low = mid+1; //searching in right side of mid
        }else if(a[mid]>x){
            high=mid-1; //searching in left side of mid
        }else{
            return mid;
        }
    }
    return -1; // Error
}

int main()
{
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
    
    // sorting using STL algorithm for sort to keep focus more on Binary Search
    sort(arr, arr+n);

    res = binarySearch(arr,x,n);
    if(res==-1){
        cout<<"Could Not Find Entered Element in the list"<<endl;
    }else{
        cout<<"Element found in the list"<<endl;
    }
    return 0;
}