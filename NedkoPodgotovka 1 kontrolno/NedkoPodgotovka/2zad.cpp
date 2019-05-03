#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int helpArr[100];
	int n;
	int spin;
	cin >> n >> spin;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	 spin=spin%n;
	for (int i = 0;i<spin ; i++)
	{
		for (int j =1; j <n; j++)
		{
			helpArr[0] = arr[n-1];
			 helpArr[j]= arr[j-1] ;		
		}
		for (int k = 0; k < n; k++)
		{
			arr[k] = helpArr[k];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << helpArr[i]<<"  ";
	}
	system("PAUSE");
	return 0;
}