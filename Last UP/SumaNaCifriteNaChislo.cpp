#include<iostream>
using namespace std;
int sum=0;
int recSumofDigits(int n)
{
	if(n==0)
	{
		return 0;
	}
     return  n%10+(recSumofDigits(n/10));
}
int main()
{
	cout<<recSumofDigits(5);
	return 0;
}
