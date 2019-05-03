#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[10][10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
	}
	return 0;
}
