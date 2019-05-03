#include<iostream>
using namespace std;
int main()
{
	
	int n;
	int counter=0;
	cin>>n;
	int k;
	cin>>k;
	int* arr=new int[n];
	int temp=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<25;j++)
		{
			temp*=n;
			{
				if(arr[i]==temp)
				{
					counter++;break;
				}
			}
		}temp=1;
	}
	if(counter==k) cout<<"YES";
	else cout<<"NO";
	return 0;
}
