#include<iostream>
using namespace std;
int main() {
	const int fnLength = 5;
	int fn= 45523;
	int  n, fnDigits[fnLength];
	char c;
	cin >> n >> c;
	fnDigits[0] = fn % 10;
	int max = fnDigits[0];
	fn /= 10;
	for (int i = 1 ; i < fnLength; i++)
	{
		fnDigits[i] = fn % 10;
		if (fnDigits[i] > max) {
			max = fnDigits[i];
		}
		fn /= 10;
	}
	int loopLength = fnLength >= n ? n : fnLength;
	for (int i = 0; i < loopLength; i++) {
		for (int j = 0; j < n; j++)
		{
			if (j < fnDigits[i] || (j >= max && (j) % max < fnDigits[i])) {
				cout << c;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
