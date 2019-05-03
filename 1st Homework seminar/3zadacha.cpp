#include<iostream>
using namespace std;
int main()
{
	int arr[1000];
	int n;
	cout<<"Input n: ";
	cin>>n;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		arr[i]=i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
				flag=1;
			}
			else flag=0;
		}
		if(arr[i]==0||arr[i]==1)
		{
			cout<<arr[i]<<"  Not prime."<<endl;
		}
		else if(flag ==0)
		{
			cout<<arr[i]<<"  "<<"Prime."<<endl;
		}
		else 	cout<<arr[i]<<"  "<<"Not prime."<<endl;
		
	}
	
	return 0;	
}
