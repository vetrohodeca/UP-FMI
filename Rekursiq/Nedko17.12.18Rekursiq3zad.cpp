#include<iostream>
int arr[5]={1,2,3,4,5};
using namespace std;
bool Check (int *arr, int x,int n)
{
	if(n==0)
	{
		if(arr[n]==x)
		{
			return true;
		}
		else return false;
	}
	else
	{
		Check(arr,x,n-1);
	}
}
int main()
{
	int x;
	cin>>x;
	cout<<Check(arr,x,5);
	return 0;
}
