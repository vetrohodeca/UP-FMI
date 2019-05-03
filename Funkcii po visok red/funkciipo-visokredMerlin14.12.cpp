#include<iostream>
using namespace std;
bool isOdd(int n)
{
	if(n%2==1)
	{
		return true;
	}
}
int* Filter(new int arr1[],new int arr2[],int n, &newSize ,bool(*IsOdd)(int))
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(IsOdd(arr1[i])==true)
		{
		newSize++;
		}
		int result= new int[newSize];
		int j=0;
	}
	return arr2; 
}
int main()
{
	int A[5]={1,2,3,4,5};
	int B[5]={0};
	int n=5;
	Filter(A,B,n,isOdd);
	delete[]arr1;
	delete[]arr2;
	int i=0;
	while(B[i]!=0)
	{
		cout<<B[i]<<"  ";
		i++;
	}
	return 0;
}
