#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num;
	int counter = 0;
	double result;
	double min = 65656;
	double max = 0;
	cin >> num;
	while (num >= 0)
	{
		
		if (floor(num) == num) counter++;
		if (num > max) max = num;
		if (num < min) min = num;
		cin >> num;
	}
	if (counter < 2)
	{
		cout << "Error" << endl;
	}
	else
	{
		result = max - min;
		cout << result;
	}
	return 0;
}