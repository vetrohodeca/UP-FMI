#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char curArr[100];
	char maxChar[100];
	int sum = 0;
	int maxSum=0;
	for (int i = 0; i < n; i++)
	{
		cin >> curArr;
		for (int j = 0; j < n; j++)
		{
			sum = sum + curArr[i];
		}
		if (sum > maxSum)
		{
			strcpy_s(maxChar, curArr);
		}
	}
	cout << maxChar<<endl;
	system("pause");
	return 0;
}