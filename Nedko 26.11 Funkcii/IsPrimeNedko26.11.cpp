#include<iostream>
#include<cmath>

using namespace std;
bool isPrime(int n)
	{
		bool flag=0;
		for(int i=2;i<n/2;i++)
		if(n%i==0){
			flag=1;
			
		}
		return flag;
	}
int main()
{
	int n;
	cin>>n;
	cout<<isPrime(n);
	return 0;
}
