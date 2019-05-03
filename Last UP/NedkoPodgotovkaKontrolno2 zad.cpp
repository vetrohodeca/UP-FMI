#include<iostream>
using namespace std;
int getNum(int tubes, int nLeft)
{
	int sum=0;
	if(nLeft<0) return 0;
	if(tubes==1) return 1;
	int sunm =0;
	for(int i=0;i<=nLeft;i++)
	{
		sum+=getNum(tubes-1,nLeft-i);
	}
	return sum;
}
int main()
{
	cout<<getNum(2,8);
	return 0;
}
