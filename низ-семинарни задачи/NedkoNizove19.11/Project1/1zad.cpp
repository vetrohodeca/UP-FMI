#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char niz[51];
	cin.getline(niz,51);
	int length = strlen(niz);
	cout << *niz << endl<<*(niz+length/2)<<endl<<*(niz+length-1)<<endl;
	system("PAUSE");
	return 0;
}