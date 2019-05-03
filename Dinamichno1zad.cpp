#include<iostream>
#include<cstring>
using namespace std;
char* getFullName(char*firstName ,char*lastName)
{
	char* fullName= new char[strlen(firstName)+ strlen(lastName)+2];
	int j=0;
	for(int i=0;i<strlen(firstName);i++)
	{
		fullName[j]=firstName[i];
		j++;
	}
	fullName[j]=' ';
	j++;
		for(int i=0;i<strlen(lastName);i++)
	{
		fullName[j]=lastName[i];
		j++;
	}
	fullName[j]='\0';
	return fullName;
}
int main()
{
	char* res;
	res=getFullName("FMI","Sofia");
	cout<<res;
	delete[]res;
	return 0;
}
