#include<iostream>
using namespace std;
int main()
{
	int arr1[100];
	int arr2[100];
	int m,n;
	cin>>m>>n;
		bool isSubsecuence=true;
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
		for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<m-n+1;i++)
	{ 	 isSubsecuence=true;
		for(int j=0;j<n;j++)
		{
			if(arr1[i+j]!=arr2[j])
			{
				isSubsecuence=false;
			}
		}if(isSubsecuence==true ){
			cout<<"Yes"; break;
		}
	}
	if(isSubsecuence==false)
	{
		cout<<"No";
	}
	return 0;
}
