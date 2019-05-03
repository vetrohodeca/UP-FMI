//Александър Филисян 1 курс
#include<iostream>
#define NumberOfTasks 20
#define COL 2
using namespace std;
int CalculateTaskNumber(int FN) {
	int	taskNumber = (FN % NumberOfTasks) + 1;
	return taskNumber;
}
void  CalculateTable(int *table, int(*CalculateTaskNumber)(int), int numberOfStudents) {
	for (int i = 0; i < numberOfStudents; i++) {
		*(table + i * COL + 1) = CalculateTaskNumber(*(table + i * COL + 0));
	}
}
int* HarderTasks(int *harderTasksFN, int* table, int numberOfStudents, int &length) {
	int j = 0;
	for (int i = 0; i < numberOfStudents; i++) {
		int currentTaskNumber = *(table + i * COL + 1);
		if (currentTaskNumber >= 15 && currentTaskNumber <= NumberOfTasks) {
			harderTasksFN[j] = *(table + i * COL + 0);
			j++;
		}
	}
	length = j;
	return harderTasksFN;
}

int main() {
	int numberOfStudents;
	cout << "Input number of students ";
	cin >> numberOfStudents;
	int *table = new int[numberOfStudents * 2];
	int *harderTasksFN = new int[numberOfStudents];
	for (int i = 0; i < numberOfStudents; i++) {
		cout << "Input FN of " << i + 1 << " student:";
		cin >> *(table + i * COL + 0);
	}
	CalculateTable(table, CalculateTaskNumber, numberOfStudents);
	int length;
	HarderTasks(harderTasksFN, table, numberOfStudents, length);
	for (int i = 0; i < length; i++) {
		cout << harderTasksFN[i] << endl;
	}
	system("pause");
	return 0;
}
