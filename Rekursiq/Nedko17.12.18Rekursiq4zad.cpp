#include<iostream>
using namespace std;
char arr[5]="abcd";
char Check(char *arr,int i, int n)
{
	if(i==n) 
	{
		return 'n';
	}
	else if (arr[i]>='A'&&arr[i]<='Z')
	{
			return arr[i];
	}
	
	else return (Check(arr, i+1,n));
}
int main()
{
	int n=4;
	int i=0;
	cout<<Check(arr,i,n)	;
	return 0;
}
