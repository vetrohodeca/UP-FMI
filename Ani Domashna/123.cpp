#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num;
	int counter=0;
		int result;
		int min=0; 
		int max=0;

	do
	{
		cin>>num;
		if(floor(num)==num) counter++;
		 if(num>max) max=num;
		 if(min<num) min = num;
	}
		while(num>0);
	if(counter<2)
	{
		cout<<"Error";
	} 
	else
	{
		result=max-min;
		cout<<result;
	}
	return 0;
}
