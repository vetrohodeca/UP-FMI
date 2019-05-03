//Александър Филисян 1 курс
#include<iostream>
using namespace std;
int table[20][2] = {0};
int CalculateTaskNumber(int FN, int numberOfTasks)
{
	int	taskNumber = (FN% numberOfTasks) + 1;
	return taskNumber;
}
void CalculateTable (int table[][2],int (*CalculateTaskNumber)(int, int),int numberOfStudents,int NumberOfTasks)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		table[i][1] = CalculateTaskNumber(table[i][0], NumberOfTasks);
	}
}
int main()
{
	int numberOfStudents;
	cout << "Input number of students";
	cin >> numberOfStudents;
	int numberOfTasks ;
	cout << "Input number of tasks";
	cin>>numberOfTasks;
	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << "Input FN of " << i + 1 << " student:";
		cin >> table[i][0];
	}
	CalculateTable(table, CalculateTaskNumber,numberOfStudents,numberOfTasks);
	for (int i = 0; i < numberOfStudents; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << table[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}



