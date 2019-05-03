#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char curArr[100];
	char maxArr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> curArr;
		if (strcmp(maxArr,curArr ) <0)
			strcpy(maxArr, curArr);
	}
	cout << maxArr<<endl;
	system("pause");
	return 0;
}