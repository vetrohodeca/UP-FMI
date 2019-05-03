#include<iostream>
using namespace std;
int Length(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[100];
	cin.getline(arr,100);
	cout<<Length(arr);
	return 0;
}
