#include<iostream>
#include<cstring>
using namespace std;
int charArrLength(char arr[])
{
	int i=0;
	while(arr[i]!='\0')
	{
		i++;
	}
	return i;
}
bool IsPalindrome(char arr[])
{
	int length=charArrLength(arr);
	for(int i=0, j=(length/2)+1;i<length/2,j>=0;i++,j--)
	{
		if(arr[i]!=arr[j])
		{
			return false;break;
		}
		 return true;
	}
	
}
int main()
{
	char arr[100];
	cin.getline(arr,100);
	if(IsPalindrome(arr)==true)
	{
		cout<<"Palindrom";
	}
	else cout<<"Ne e palindrom";
	return 0;
}
