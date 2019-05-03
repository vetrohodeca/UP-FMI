#include<iostream>
#define MAX_SIZE 100
using namespace std;
char encrypted[100];
char* NumberOfChangedWords(char* str)
{
	
	int index = 0;
	bool isRow = false;
	int repeats = 1;
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		if (int(str[i]) == (str[i + 1] -1))
		{
			repeats++;// ako prednoto e tochno s edno po- malko uvelichavame reps
		}
		else if(str[i-1] == (str[i] - 1))//do kraq na posledovatelnata redica redica
		{
			if (repeats < 10)// priemame che nai-dulgara redica shte bude 10 simvola!
			{
				encrypted[index] = 48 + repeats;
				encrypted[index + 1] = str[i];
				index += 2;
			}
			else return false;// ako redicata e po- dulga  ot 10
			
			repeats = 1;
		}
		else
		{
			encrypted[index]=str[i];
				index++;
		}
	}
	return encrypted;
}
int main(	)
{
	char arr[13] = "abceabfhddef";

		cout << NumberOfChangedWords(arr);
	while (true);
	return 0;
}
