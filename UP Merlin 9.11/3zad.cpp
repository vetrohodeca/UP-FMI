#include<iostream>
using namespace std;
int main()
{
	int n,m;
	double arr[10][10];
	cout<<"N= "<<"   "<<"M= "<<endl;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		
	}
	for(int j=0;j<m;j++)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+arr[i][j];
		}
		cout<<sum<<"  ";
	}
	return 0;
}
