#include<iostream>
#define MAX_SIZE 100
using namespace std;
int NumberOfChangedWords(char* word, char* sentence)
{
	char* ptr;
	int counter = 0;
	int lengthW = 0;
	while (word[lengthW] != '\0')
	{
		lengthW++;
	}
	int lengthS = 0;
	while (sentence[lengthS] != '\0')
	{
		lengthS++;
	}
	int equalLetters = 0;
	for (int i = 0; i < lengthS - lengthW + 1; i++)
	{
		for (int j = 0; j < lengthW; j++)
		{
			if (sentence[i + j] == word[j])
				equalLetters++;
			if (equalLetters == lengthW)
			{
				counter++;
				for (int k = i + j; k >= i; k--)
				{
					sentence[k] = '*';
					ptr=sentence+k;
					
				}
			}
		}
		equalLetters = 0;
	}
	cout<<&ptr<<endl;
	cout << sentence << endl;
	return counter;
}
int main()
{
	char arr[8] = "abckabc";
	char arr2[4]="abc";
	cout <<NumberOfChangedWords(arr2,arr);
	return 0;
}
