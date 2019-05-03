#include<iostream>
#include<cstring>
using namespace std;
int RecSearch(int n, char symbol, char* arr, int currentIndex, int repeats )
{
	int length=strlen(arr);
	if(currentIndex==length)
	{
		return -1;
	}
    if(arr[currentIndex]==symbol)
    {
    	if(n==repeats+1)
    	{
    		return currentIndex;
		}
		else RecSearch( n, symbol, arr,currentIndex+1, repeats+1 );
	}
	else return RecSearch( n,  symbol, arr,currentIndex+1, repeats );
}
int main()
{
	char symbol;
	char arr[100];
	int n;
	cout<<"Input symbol: ";
	cin>>symbol;
	cout<<"Input string: ";
	cin>>arr;
	cout<<"Input n: ";
	cin>>n;
	cout<<RecSearch(n,symbol, arr,0,0)<<endl;
	return 0;
}
