#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int ninethDigit=number%10;
	int eigthDigit=number/10%10;
	int seventhDigit=number/100%10;
	int sixthDigit=number/1000%10;
	int fifthDigit=number/10000%10;
	int fourthDigit=number/100000%10;
	int thirdDigit=number/1000000%10;
	int secondDigit=number/10000000%10;
	int firstDigit=number/100000000%10;
	if(fourthDigit==0&&fifthDigit==0&&sixthDigit==0&&seventhDigit==0&&eigthDigit==0)
	{
		cout<<"Invalid card number";
		return 0;
	} 
	switch (thirdDigit)
	{
		case 0: 
		cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Informatics\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 1:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Computer science\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 2:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Information systems\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 3:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Software engieneering\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 4:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Applied math\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 5:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Math\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break;
		case 6:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Statitcs\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break
		case 7:
			cout<<"{\"card_version\":"<<firstDigit<<",\"owner_spec\""<<':'<<"\"Math and Informatics\","<<"\"owner_id\":"<<fourthDigit<<fifthDigit<<sixthDigit<<seventhDigit<<eigthDigit<<"}"<<endl;break
	}
	
	return 0;
}
