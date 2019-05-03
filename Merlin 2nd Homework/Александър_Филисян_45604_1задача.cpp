//Александър Сисак Филисян 45604 1 курс.
//пояснения по решаването на задачата- разделям обхождането на матрицата на рамки, като алгоритъмът за тях е един и същ, разликата е в големината, която всяка итерация намяля с 2 и индексите, които всяка итерация се увеличават с 1.
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
