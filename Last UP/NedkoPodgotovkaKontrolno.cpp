#include<iostream>
using namespace std;
int getSum(int,int,int);
int getCombinations(int n)
{
	int sum=0;
	int high=n-3;
	int low=n/4;
	if(n%4!=0)
	{
		low++;
	}
	for(int i=low;i<=high;i++)
	{
		sum=sum+getSum(n-i,3,i);
	}
	return sum;
}
int getSum(int nLeft, int tubes, int last)
{
	if(nLeft<=0) return 0;
	if(tubes==1)
	{
		if(nLeft<=last&&nLeft>=1) return 1;
		else	return 0;
	}
	else
	{
		int sum= 0; 
		for(int i=last;i>=1;i--)
		{
			sum+=getSum(nLeft-i,tubes-1,i);
		}
		return sum;
	}
}
int main()
{
	cout<<getCombinations(8);
	return 0;
}
