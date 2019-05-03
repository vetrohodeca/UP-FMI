#include<iostream>
using namespace std;
bool recFunc(int n, int *arr, int currIndex)
{
	bool isDifferentElements = true;
	if (currIndex == n-2)
	{
		if (arr[currIndex] != arr[currIndex + 1])
			return true;
		else return false;
	}
	else recFunc(n, arr, currIndex + 1);
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << recFunc(n, arr,0);
	delete[]arr;
	while (true);
	return 0;
}