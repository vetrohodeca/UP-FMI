#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char niz[100];
	int sum=0;
	int maxSum = 0;
	char maxStr[100];
	int n;
	cin >> n;
	int length = 0;
	
	for (int j = 0; j <= n; j++)
	{
		cin.getline(niz, 100);
		length = strlen(niz);
		sum = 0;
		for (int i = 0; i < length; i++)
		{
			sum = sum + niz[i];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			strcpy_s(maxStr, niz);
		}
	}
	cout <<maxSum;
	system("PAUSE");
	return 0;
}