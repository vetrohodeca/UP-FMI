//Александър Филисян 1 курс
#include<iostream>
using namespace std;
int arr[100];
int search(int *arr,int k,int startIndex, int lastIndex)
{
	if(startIndex<=lastIndex)
	{
		int midIndex=(startIndex+lastIndex)/2;
	    if(arr[midIndex]==k)
		{
			return midIndex;
		}
		else if(arr[midIndex]>k)
		{
			return search(arr,k,startIndex, midIndex-1);
		}
		else return search(arr,k,midIndex+1, lastIndex);
	}
	return -1;
}
int main()
{
	int k;
	cout<<"Input the number ";
	cin>>k;
	int n;
	cout<<"Input size of array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<search(arr,k,0,n);
	return 0;
}
