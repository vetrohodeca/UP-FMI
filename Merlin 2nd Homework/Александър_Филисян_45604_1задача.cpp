//���������� ����� ������� 45604 1 ����.
//��������� �� ���������� �� ��������- �������� ����������� �� ��������� �� �����, ���� ����������� �� ��� � ���� � ���, ��������� � � ����������, ����� ����� �������� ������ � 2 � ���������, ����� ����� �������� �� ���������� � 1.
#include<iostream>
#define MAX_SIZE 100
using namespace std;
void SpiralSort( int arr[][MAX_SIZE])
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int br=0;

	while(n>0)
	{
		
	
			for(int j=0;j<n;j++)
			{
				cout<<arr[0+br][j+br]<<"  ";
			}
			for(int i=1;i<n;i++)
			{
				cout<<arr[i+br][n-1+br]<<"  ";
			}
				for(int j=n-2;j>=0;j--)
			{
				cout<<arr[n-1+br][j+br]<<"  ";
			}
				for(int i=n-2;i>=1;i--)
			{
				cout<<arr[i+br][0+br]<<"  ";
			}
			n-=2;
			br++;
	}
}
int main()
{
	int arr[MAX_SIZE][MAX_SIZE];
	SpiralSort(arr);
	return 0;
}
