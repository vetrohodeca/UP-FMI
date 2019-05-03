#include<iostream>
using namespace std;
bool isOdd(int n)
{
	if (n % 2 == 1)
	{
		return true;
	}
}
void Filter(int arr1[], int arr2[], int n, bool(*IsOdd)(int))
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (IsOdd(arr1[i]) == true)
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
}
int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 0 };
	int n = 5;
	Filter(A, B, n, isOdd);
	for (int i = 0; i < n; i++)
	{
		cout << B[i];
	}
	system("pause");
	return 0;
}