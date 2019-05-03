#include<iostream>
using namespace std;
int main()
{
	int arr[100][100];
	int pr = 1;
	bool flag = 1;
	int prDiagonal = 1;
	int pr1 = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		int prRed = 1;
		for (int j = 0; j < n; j++)
		{
			prRed = arr[j][i] * prRed;

			if (i == 0)
			{
				pr1 = prRed;
			}
			else if (prRed != pr1 && j == n - 1)
			{
				flag = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int prKolona = 1;
		for (int j = 0; j < n; j++)
		{
			prKolona = arr[i][j] * prKolona;

			if (j == n - 1 && prKolona != pr1)
			{
				flag = 0;
			}
		}
	}
	int i = 0;
	int j = 0;
	int prDiagonali = 1;
	while (i < n&&j < n)
	{
		prDiagonali *= arr[i][j];
		i++;
		j++;
		if (prDiagonali != pr1 && j == n )
		{
			flag = 0;
		}
	}
	for (int k = n, l = 0; k >= 0, l < n; k--, l++)
	{
		prDiagonali *= arr[k][l];
		if (prDiagonali != pr1 && k == 0)
		{
			flag = 0;
		}
	}
	if (flag == 1)
	{
		cout << "Da";
	}
	else cout << "Ne";
	system("pause");
	return 0;
}