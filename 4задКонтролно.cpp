#include<iostream>
#include<cstring>
#define MAX_SIZE 1000
using namespace std;
int main()
{
	char arr[MAX_SIZE];
	cin.getline(arr,1000);
	int i=0;
	while(arr[i]!='\0')
	{
		if(arr[i]==' '||arr[i]==','||arr[i]=='!'||arr[i]=='?')
		{
			cout<<arr[i];
			i++;
		}
		else{
		
			cout<<int(arr[i]-'a'+1);
			i++;
		}
	}
	cout<<endl;
	int br=1;
	i=0;
		while(arr[i]!='\0')
	{
		if(arr[i]==' '||arr[i]==','||arr[i]=='!'||arr[i]=='?')
		{
		br++;
		}
		i++;
	}
	cout<<br<<endl;
	system("pause");
	return 0;
}
