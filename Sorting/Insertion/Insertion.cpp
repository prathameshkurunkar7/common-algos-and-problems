#include<iostream>
using namespace std;
#define max 20

void insertionSort(int* data,int n)
{
    int temp,j;

    for(int i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
        {
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}

	cout<<"In ascending order: "<<endl;
	for(int i=0; i<n; i++)
    cout<<data[i]<<" ";
}

int main()
{
	int data[max],n;
	cout<<"Enter number of terms(should be less than 20):"<<endl;
	cin>>n;
	cout<<"Enter elements: "<<endl;

	for(int i=0;i<n;i++)
		cin>>data[i];

    insertionSort(data,n);
	
    return 0;
}