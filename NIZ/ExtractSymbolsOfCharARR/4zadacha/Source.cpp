#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char A[100];
	char B[100];
	int j = 0;
	cin.getline(A, 100);
	int length = strlen(A);
	for (int i = 0; i < length; i++)
	{
		if (A[i] >= 'a'&&A [i] <= 'z')
		{
			B[j]=A[i];
			j++;
		}
		
	}
	B[j] = '\0';
	for (int i = 0; i < j; i++)
	{
		cout << B[i];
	}
	system("pause");
	return 0;
}