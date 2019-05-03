#include<iostream>
//Александър Сисак Филисян 45604 1 курс.
//пояснения- броят на уникалните символи= броя на всички- броя на повтарящите се.
#include<cstring>
#define MAX_SIZE 100
using namespace std;
int UniqueElementsCount(int firstIndex, int secondIndex, char arr[])
{
	int equalElements = 0;
	for (int i =firstIndex; i < secondIndex; i++)
	{
		for (int j = i+1; j <= secondIndex; j++)
		{
			if (arr[i] == arr[j])
			{
				equalElements++; break;//za da ne se chupi pri 3 ednakvi cifri!
			}
		}
	}
	
	int uniqeElements = secondIndex - firstIndex - equalElements+1 ;// dobavqme 1, zashtoto intervalut e zatvoren.
	return uniqeElements;
}
int main()
{
	int i, j;
		cout << "i=:";
		cin >> i;
		cout << "j=:";
		cin >> j;
		if (i < 0 || j < 0 || i>j)
		{
			cout << "Wrong input" << endl;
			system("pause");
			return 0;
		}

	char symbols[MAX_SIZE] = { 'n', 'a', 'b', 'a', 'b', 'a', 't', 'i', 'h', 'v', 'u', 'r', '4', 'i', 'l', 'o', 't', 'o' };
	cout << UniqueElementsCount(i, j, symbols) << endl;
	system("pause");
	return 0;
}
