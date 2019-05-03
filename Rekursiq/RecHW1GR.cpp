#include<iostream>
using namespace std;
int RecFunction(int n, double k)
{
	if( n=1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 7;
	}
	else if(n==3)
	{
		return 13;
	}
	else return RecFunction(n-1,k) + k*(RecFunction(n-2,k) * RecFunction(n-3,k)) + 10;
	
}
int main()
{
	int n;
    double k;
    cin>>n>>k;
    cout<<RecFunction(n,k);
}
