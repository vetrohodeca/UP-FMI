// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char buditeli[20][MAX] = {
	"Kiril i Metodi",
	{"Paisii Hilendarski"},
	{"Petur Beron"},
	{"bratq Mihailowi"},
	{"Petko Slaweikow"},
	{"Zahari Stoqnow"},
	{"Wasil Lewski"},
	{"Hristo Botew"},
	{"Iwan Wazow"},
	};
	int flag = 0;
	int br = 0;
	char vhod[20];
	cin.getline(vhod, 20);
	int i = 0;
	int j = 0;
	while(j<9)
	{
		i = 0;
		while (buditeli[j][i] != '\0')
		{
			if (buditeli[j][i] == vhod[i]&&br==i)
			{
				flag = 1;
				br++;
			}
			else flag=0;
			i++;
		}
		if (flag == 1) break;
		j++;
	}

	if (flag == 1)
	{
		cout << "Buditel";
	}
	else cout << "Ne e buditel";
	return 0;
}