#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int vicochina=2*n+2;
	for(int i=0;i<n;i++	)
	{
		for(int k=n;k>i;k--)
		{
			cout<<" ";
		}
			cout<<"/";
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
	
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		cout<<"\\";
		cout<<endl;
	}
	cout<<" ";
	for(int i=0;i<2*n;i++)
	{
		cout<<"_";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"|";
		for(int j=0;j<2*n;j++)
		{
			cout<<" ";
		}
		cout<<"|";
		cout<<endl;
	}
	cout<<" ";
	for(int i=0;i<2*n;i++)
	{
		cout<<"=";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
