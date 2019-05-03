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
			arr[i][j]=arr[i][j]+1;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
