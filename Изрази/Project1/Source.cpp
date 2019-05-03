#include<iostream>
#include<cmath>
using namespace std;
double factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main()
{
	/*	int x,y;
		cin>>x>>y;
		double p=(((log(x*x-2)/log(4)+pow(exp(1),(x-y)/2))),2)/pow((log(2+pow(exp(1),(x+y)/2))/log(10)),8);
		cout<<p;
		return 0;*/
	/*int n;
	cin >> n;
	double s = 0;
	for (int i = 2; i <= 2 * n; i += 2)
	{
		s += i /( (i + 1)*factorial(i + 2));
	}
	cout << s;*/
	int n;
	cin >> n;
	int sum = 0;
	int currentSum = 1;
	
	for (int i = 1; i <=n; i++)
	{
		int startNum = i;
		for (int j = 1; j <=i+1;j++)
		{
			currentSum *= startNum;
			startNum++;
			
		}
		sum += currentSum;
		currentSum = 1;
	}
	cout << sum;
	
	while (true);
}