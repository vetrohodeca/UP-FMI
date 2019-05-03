#include<iostream>
using namespace std;
int main() {
	char c;
	int n;
	cin >> n >> c;
	int redove = (26 - 2 * n) / 2;
	for (int i = 0; i < redove; i++) {
		cout << endl;
	}
	int koloni = (81 - 2 * n) / 2;
	for (int i = 1; i < n; i++) {
		for (int i = 0; i < koloni; i++) {
			cout << " ";
		}
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << c << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < koloni; i++) {
		cout << " ";
	}
	for (int i = 0; i < n; i++) {
		cout << c << " ";
	}
	cout << endl;
	for (int i = 1; i < n; i++) {
		for (int i = 0; i < koloni; i++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < n - i; j++) {
			cout << c << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < redove; i++) {
		cout << endl;
	}
	system("pause");
	return 0;
}


