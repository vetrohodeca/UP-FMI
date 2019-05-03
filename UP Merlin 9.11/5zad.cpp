#include<iostream>
using namespace std;
int main()
{
	int arr[10][10] ={
	 { 1, 2, 3},
	{4,5,6},
	{7,8,9}
	};
	int n;
	int x, y;
	cout << "Input size of the matrix: ";
	cin >> n;
	cout << "Input index: ";
	cin >> x >> y;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int i = x;
		int j = y;
	
	do {
		i = i - 1;
		j = j - 1;
		cout << arr[i][j]<<endl;
	} while (i > 0 && j > 0);
	i = x;
	j = y;
	
	do {
		i = i-1;
		j = j + 1;
		cout << arr[i][j] << endl;
	} while (i > 0 && j < n);
	i = x;
	j = y;
	do {
		i = i + 1;
		j = j + 1;
		cout << arr[i][j] << endl;
	} while (i < n-1  && j < n);

	i = x;
	j = y;
	 do
	{
		i = i + 1;
		j = j - 1;
		cout << arr[i][j] << endl;
	 } while (i < n  && j > 0);


		return 0;
}
