#include<iostream>
using namespace std;
unsigned long long Factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else{
		return n*Factorial(n-1);
	}
}
int main()
{
	cout<<Factorial(60);
	return 0;
}
