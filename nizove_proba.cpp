#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
	char str[15]="Alex";
	char str2[15]="Filisyan99";
	int length=strlen(str);	
	cout<<"length of str1: "<<length<<endl;
	cout<<strncat(str,str2,3)<<endl;
	cout<<strcmp(str,str2)<<endl;
	cout<<strstr(str,str2)<<endl;
	cout<<atoi(str2)<<endl;
	return 0;
}
