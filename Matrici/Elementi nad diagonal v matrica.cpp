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
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
	return 0;
}
