#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	if(x>=0&&y>=0)
	{
		if(x*x+y*y>4*4)
		{
			cout<<"Outside";
		}
		else if((x-2)*(x-2)+y*y<4)
		{
			cout<<"Outside";
		}
		else cout<<"Inside";
	}
	if(x<=0&&y>=0)
	{
		if(x*x+y*y>4*4)
		{
			cout<<"Outside";
		}
		else if((x+2)*(x+2)+(y*y)<1)
		{
			cout<<"Outside";
		}
		else cout<<"Inside";
	}
	if(y<=0&&x<=0)
	{
		if((x+2)*(x+2)+(y*y)>4)
		{
			cout<<"Outside";
		}
		else if((x+2)*(x+2)+(y*y)<1)
		{
			cout<<"Outside";
		}
	   else
	   {
	   	cout<<"Inside";
	   }
	}
	if(x>=0&&y<=0)
	{
		cout<<"Outside";
	}
	return 0;
}
