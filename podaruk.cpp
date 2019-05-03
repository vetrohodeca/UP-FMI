#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Vuvedi n:";
	cin>>n;
	cout<<"Vuvedi m:";
	cin>>m;
	for(int i=0; i<n; i++)
{
if(i<(n-m)/2)
	cout<<'*';
	else if(i<(n-m)/2+m)
		cout<<'=';
	else 
		cout<<'*';
}
cout<<endl;
	for(int i=0; i<(n-m-2)/2;i++)
	{
		for(int j=0;j<n; j++)
		{
			if(j==0||j==n-1)
				cout<<'*'; 
			else if(j>=(n-m)/2&&j<(n-m)/2+m)
			cout<<'=';
			else 
			cout<<' ';
		}
		cout<<endl;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<'=';
		}
	cout<<endl;
	}
	for(int i=0; i<(n-m-2)/2;i++)
	{
		for(int j=0;j<n; j++)
		{
			if(j==0||j==n-1)
				cout<<'*'; 
			else if(j>=(n-m)/2&&j<(n-m)/2+m)
			cout<<'=';
			else 
			cout<<' ';
		}
		cout<<endl;
	}
for(int i=0; i<n; i++)
{
if(i<(n-m)/2)
	cout<<'*';
	else if(i<(n-m)/2+m)
		cout<<'=';
	else 
		cout<<'*';
}
cout<<endl;
	return 0;
}
