#include<iostream>
using namespace std;
char  char1[100]="hello";
char  char2[100]="lemon";
void commonSymbolFinder(char* arr1, char* arr2)
{
	int pos1=0;
	int pos2=0;
	int counter1 =0;
	int counter2=0;
	while(arr1[counter1]!='\0')
	counter1++;
	while(arr1[counter2]!='\0')
	counter2++;
	for(int i=0;i<counter1;i++)
	{
		for(int j=0;j<counter2;j++)
		{
			if (arr1[i]==arr2[j])
			{
				pos1=i;
				pos2=j;		
			}
		}
		if(pos1!=0||pos2!=0)
			{
				break;
			}
	}
	for(int i=0;i<pos2;i++)
	{
		for(int j=0;j<pos1;j++)
		{
			cout<<" ";
		}
		cout<<arr2[i];
		cout<<endl;
	}
	
	for(int i=0;i<counter1;i++)
	{
		cout<<arr1[i];
	}
	cout<<endl;
	for(int i=pos2+1;i<counter2;i++)
	{
		for(int j=0;j<pos1;j++)
		{
			cout<<" ";
		}
		cout<<arr2[i];
		cout<<endl;
	}
}
int main()
{
    commonSymbolFinder(char1, char2);
	while(true);
}
