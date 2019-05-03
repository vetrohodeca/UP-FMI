/*#include<iostream>
using namespace std;
const int MAX_SIZE=100;
//void doSmth(int (*ptrfunc)(int, int)
int next(int number)
{
	return number+3;
}
int Sum(int(*next)(int),int arr[],int n)
{
	int sum=0;
	int i=0;
	while(i<n)
	{
		sum+=arr[i];
		i = next(i);
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	int arr[MAX_SIZE];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<Sum(next,arr,n);
	return 0;
}
*/
#include<iostream>
using namespace std;
const int MAX_SIZE=100;
//void doSmth(int-tip (*ptrfunc)(tip parametri)
bool isDivisible(int x, int y)
{
	if(x%y==0)
	{
		return true;
	}
	else return false;
}
int CountNumbersWhitoutReminder(bool(*isDivisible)(int, int),int arr[],int n)
{
	int br=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(isDivisible(arr[i],arr[j])==true)
			{
				br++;
			}
		}
	}
	return br-n;
}
int main() 
{
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	int arr[MAX_SIZE];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<CountNumbersWhitoutReminder(isDivisible,arr,n);
	return 0;
}
