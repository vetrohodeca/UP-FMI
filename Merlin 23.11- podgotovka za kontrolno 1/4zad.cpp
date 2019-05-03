#include<iostream>
using namespace std;
int main()
{
	int n, m;
	bool flag = 0;
	int sum = 0;
	cin >> n >> m;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i; j < n; j++)
		{
			sum = sum + arr[j];
			if (sum == m)
			{
				cout << endl << i + 1<<"  "<<j+1 << endl;
				flag = 1;				
			}
		}
		sum = 0;
	}
	if (flag == 0)
	{
		cout << "No"<<endl;
	}
	system("pause");
	return 0;
}
