
#include<iostream>
#define MAX_SIZE 100
using namespace std;
int*  DecToBin(int number, int arr[])
{
	int *ar= new int[MAX_SIZE];
	int digitCounter = 0;
	while (number != 0)
	{
		arr[digitCounter] = number % 2;
		digitCounter++;
		number = number / 2;
	}
	return ar;

}
int main()
{
	int arr[100];
	int n;
	cin >> n;
	cout<<DecToBin(n, arr);
	system("pause");
	return 0;
}


