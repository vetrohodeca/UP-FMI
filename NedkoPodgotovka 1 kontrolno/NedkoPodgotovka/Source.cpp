#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[10][10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			

		}
	}
	for (int i=0;i<n;i+=2)
	{
		for (int j=0;j<n;j++)
		{
			int swap;
			swap = (arr[i][j]);
			arr[i][j] = arr[j][i];
			arr[j][i] = swap;
		}
	}
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] ;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}