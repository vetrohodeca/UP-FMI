#include<iostream>
using namespace std;
int main()
{
	int n;
	int suma;
	int arr[10][10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
		suma=suma+arr[i][j];
		}
		cout<<suma<<"  ";
		suma=0;
	}
	return 0;
}
