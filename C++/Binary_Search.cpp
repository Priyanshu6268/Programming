#include<iostream>
using namespace std;
//Binary Search
int bs(int A[], int low, int high,int search)
{
	int mid;
	if (high>=low)
	{
		mid=(low+high)/2;
		if(A[mid]==search)
		{
			return mid+1;
		}
		else if(search>A[mid])
		{
			return bs(A,mid+1,high,search);
		}
		else
		{
			return bs(A,low,mid-1,search);
		}
	}
	return -1;
}
int main()
{
	int n,search;
	cout<<"Please enter no of elements: "<<endl;
	cin>>n;
	int A[n];
	cout<<"Please enter elements in sorted order: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	/*
	int mid, low,high;
	low=0;
	high=n;
	mid=(low+high)/2;
	*/
	cout<<"Please enter the elements to be searched for: "<<endl;
	cin>>search;
	int res=bs(A,0,n,search);
	if (res==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at: "<<res;
	}
	/*
	while(low<=high)
	{
		if(A[mid]==search)
		{
			cout<<"Element found at index: "<<mid;
		}
		else if(search>A[mid])
		{
			low=mid+1;
			high=n;
			mid=(low+high)/2;
		}
		else if(search<A[mid])
		{
			low=0;
			high=mid-1;
			mid=(low+high)/2;
		}
		else
		{
			cout<<"Element not found."<<endl;
		}
	}
	*/
	return 0;
}
