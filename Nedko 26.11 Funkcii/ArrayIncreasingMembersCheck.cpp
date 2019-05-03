#include<iostream>
#define MAX_SIZE 100
using namespace std;
bool ArrayIncreasingMembersCheker(int arr[],int n)
{
	bool isIncreased=true;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			isIncreased=false;
		}
	}
	return isIncreased;
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<ArrayIncreasingMembersCheker(arr,n);
}
