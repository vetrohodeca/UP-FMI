#include<iostream>
using namespace std;
 long long Factoriel(int a)
{
	if(a<0)
	{
		return -1;
	}
	unsigned long long factoriel=1;
	for(int i=1;i<=a;i++)
	{
		factoriel=factoriel*i;
	}
	return factoriel;
}
int main()
{
	int n;
	cin>>n;
	cout<<Factoriel(n);
}
