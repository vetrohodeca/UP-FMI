
#include<iostream>
using namespace std;
const int numberOfTasks=20;
int harderTasksFN[6];
int table[20][2] = { 0 };
int CalculateTaskNumber(int FN, int numberOfTasks)
{
	int	taskNumber = (FN% numberOfTasks) + 1;
	return taskNumber;
}
void  CalculateTable(int  table[][2], int(*CalculateTaskNumber)(int, int), int numberOfStudents, int NumberOfTasks)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		table[i][1] = CalculateTaskNumber(table[i][0], NumberOfTasks);
	}
}
int* HarderTasks(int  table[][2], int numberOfStudents, int NumberOfTasks)
{
	int j = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (table[i][1] >= 15 &&table[i][1]<= NumberOfTasks)
		{
			harderTasksFN[j] = table[i][0];
			j++;
		}
	}
	harderTasksFN[999] = j;
	return harderTasksFN;
}

int main()
{
	int numberOfStudents;
	cout << "Input number of students ";
	cin >> numberOfStudents;
	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << "Input FN of " << i + 1 << " student:";
		cin >> table[i][0];
	}
	CalculateTable(table, CalculateTaskNumber, numberOfStudents, numberOfTasks);
	for (int i = 0; i < HarderTasks(table, numberOfStudents,numberOfTasks)[999]; i++)
	{
		cout << HarderTasks(table, numberOfStudents,numberOfTasks)[i]<<endl;
	}
	return 0;
}



