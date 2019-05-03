//Александър Сисак Филисян 45604 1 курс.
//

#include<iostream>
#define MAX_SIZE 100
using namespace std;
void  DecToBin(int number)
{
	int digitCounter = 0;
	int arr[MAX_SIZE];
	while (number != 0)
	{
		arr[digitCounter] = number % 2;
		digitCounter++;
		number = number / 2;
	}
	for (int i = digitCounter-1; i >=0; i--)
	{
		cout << arr[i];
	}
	 
}
int main()
{
	int n;
	cin >> n;
	DecToBin(n);
	system("pause");
	return 0;
}
