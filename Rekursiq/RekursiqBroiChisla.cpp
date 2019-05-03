#include<iostream>
using namespace std;
int DigitCounter(int n)
{
	if(n==0)
	{
		return 1;
	}
    return 1+ DigitCounter(n/10);
}
int main()
{
	cout<< DigitCounter(52421);
	return 0;
}
