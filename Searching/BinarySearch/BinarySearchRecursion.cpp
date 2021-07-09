#include<iostream>
#include <algorithm>
using namespace std;

int binarySearchRecursive(int* a,int x,int low,int high){
    if(low>high) return -1; //Error
    int mid = (low+high)/2;

    if(a[mid]<x){
        return binarySearchRecursive(a,x,mid+1,high); //searching right side of array
    } else if(a[mid]>x){
        return binarySearchRecursive(a,x,low,mid-1); // searching left side of array
    } else{
        return mid;
    }
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

    res = binarySearchRecursive(arr,x,0,n-1);
    if(res==-1){
        cout<<"Could Not Find Entered Element in the list"<<endl;
    }else{
        cout<<"Element found in the list"<<endl;
    }
    return 0;
}