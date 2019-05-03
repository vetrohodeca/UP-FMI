#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char sentance[1000];
	cin.getline(sentance,1000);
	int length = strlen(sentance);
	for (int i = 0; i < length; i++)
	{
		if (sentance[i] == 'a' || sentance[i] == 'e' || sentance[i] == 'o' || sentance[i] == 'i' || sentance[i] == 'u')
		{
			cout << sentance[i]<<" ";
		}
	}
	system("pause");
	return 0;
}