#include "pch.h"

#include<iostream>
using namespace std;
int arr[6][6] = {
{1,2,3,4,5,6},
{7,8,1,2,3,4},
{5,6,7,8,1,2},
{3,4,5,6,7,8},
{1,2,3,4,5,6},
{7,8,1,2,3,4} };
int arrN[6];
void InputMatrix(int arr[][6])
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> arr[i][j];
		}
	}
}
bool Validation(int arr[][6])
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] < 0 || arr[i][j] > 9)
				return false;
		}
	}
	return true;
}
int CountDigits(int M)
{
	int counter = 0;
	while (M != 0)
	{
		M = M / 10;
		counter++;
	}
	return counter;
}
int* NumberToArr(int *arrN, int M)
{
	int counter = 0;
	int M2 = M;
	while (M != 0)
	{
		M = M / 10;
		counter++;
	}
	for (int i = counter - 1; i >= 0; i--)
	{
		arrN[i] = M2 % 10;
		M2 = M2 / 10;
	}
	return arrN;
}
int Search(int arr[][6], int M)
{
	int counter = 0;
	bool isSubsecuence = 0;
	int N = CountDigits(M);
	int *arrayNumber = NumberToArr(arrN, M);
	for (int k = 0; k < 6; k++)
	{
		for (int i = 0; i < 6 - N + 1; i++)
		{
			isSubsecuence = true;
			for (int j = 0; j < N; j++)
			{
				if (arr[i + j][k] != arrayNumber[j])
				{
					isSubsecuence = false;
				}
			}
			if (isSubsecuence == true)
			{
				counter++; break;
			}
		}
	}
	for (int k = 0; k < 6; k++)
	{
		for (int i = 6; i >= N - 1; i--)
		{
			isSubsecuence = true;
			for (int j = 0; j < N; j++)
			{
				if (arr[i + j][k] != arrayNumber[j])
				{
					isSubsecuence = false;
				}
			}
			if (isSubsecuence == true)
			{
				counter++; break;
			}
		}
	}
	for (int k = 0; k < 6; k++)
	{
		for (int i = 0; i < 6 - N + 1; i++)
		{
			isSubsecuence = true;
			for (int j = 0; j < N; j++)
			{
				if (arr[k][i + j] != arrayNumber[j])
				{
					isSubsecuence = false;
				}
			}
			if (isSubsecuence == true)
			{
				counter++; break;
			}
		}
	}
	for (int k = 5; k >= 0; k--)
	{
		for (int i = 6; i >= N - 1; i--)
		{
			isSubsecuence = true;
			for (int j = 0; j < N; j++)
			{
				if (arr[k][i + j] != arrayNumber[j])
				{
					isSubsecuence = false;
				}
			}
			if (isSubsecuence == true)
			{
				counter++; break;
			}
		}
	}
	return counter;
}
int main()
{
	int m;
	cout << "M= ";
	cin >> m;
	//InputMatrix(arr);
	if (Validation(arr) == 0)
	{
		cout << "Matrix is not simple";
		return 0;
	}
	cout << Search(arr, m) << endl;
	return 0;
}



