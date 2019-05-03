#include<iostream>
using namespace std;
int main()
{
	int arr[10][10];
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
		for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(arr[i][j]==k)
			cout<<i<<"  "<<j<<endl;
		}
	}
	return 0 ;
}

