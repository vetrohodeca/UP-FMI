
#include<iostream>
using namespace std;

int main()
{
	int n,res, c;
	cin >> n;
	res = 0;
	for (int i = 0; i < n; i++) {
		cin >> c;
		res = res ^ c;
	}
	cout << res <<endl;
	system("pause");
	return 0;
}
