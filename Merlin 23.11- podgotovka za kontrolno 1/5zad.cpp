#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char A[100];
	char B[100];
	cin.getline(A, 100);
	cin.getline(B, 100);
	int j = 0;
	for (int i = 0; i < 100; i++)
	{
		if (j<strlen(B)&&A[i] == B[j])
		{
			j++;
		}
	}
	if (B[j] == '\0')
	{
		cout << "yes";
	}
	else cout << "No";
	system("pause");
	return 0;
}
