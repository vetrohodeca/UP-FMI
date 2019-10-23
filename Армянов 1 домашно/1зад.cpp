#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	int distanceBetweenTwoCenters=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	if(x1==x2&&y1==y2)//centrovete suvpadat
	{
		if(r1==r2)
		{
			cout<<"Suvpadat"<<endl;
		}
		else cout<<"Nqmat obshti tochki"<<endl;
	}
	else 
	{
		if(distanceBetweenTwoCenters==r1+r2)
		{
			cout<<"Doprirat se";
		}
		if(distanceBetweenTwoCenters>r1+r2)
		{
			cout<<"Nqmat obshti tochki";
		}
		else
		{
			if(distanceBetweenTwoCenters+r1==r2||distanceBetweenTwoCenters+r2==r1)
			{
				cout<<"Dopirat se";
			}
			else cout<<"Presichat se";
		}
	}
}
