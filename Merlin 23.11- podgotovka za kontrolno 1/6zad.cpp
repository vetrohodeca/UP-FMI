#include<iostream>
using namespace std;
int main()
{
	char A[100];
	char B[100];
	int j = 0;
	cin.getline(A, 100);
	for (int i = 0; i < 100; i++)
	{
		if (A[i] >= 'a'&&A[i] < 'z')
		{
			B[j]=A[i] ;
			j++;
		}
	}
	B[j] = '\0';
	cout<<B;
	system("pause");
	return 0;
}
