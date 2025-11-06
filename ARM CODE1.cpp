// ARM CODE1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int option, balance = 10000, amount;
	cout << "welcome to Haiders ATM \n";
	cout << "for deposite put 1 \n";
	cout << "for withdrawal put 2 \n";
	cout << "for pay bill put 3 \n";
	cout << "for check balance put 4 \n";
	cin >> option;
	switch (option)
	{
	case (1):cout << "enter amount for deposite";
		cin >> amount;
		balance += amount;
		cout << "deposite successfully .New balance" << balance << endl;
		break;

	case (2):cout << "enter amount for withdrawal ";
		cin >> amount;
		if (amount <= balance)
		{
			balance -= amount;
			cout << "Withdrawal successfully .New balnce " << balance << endl;

		}
		else
		{
			cout << "you have insufficient balance ";
		}
		break;

	case (3):cout << "for paying bill put bill amount";
		cin >> amount;
		if (amount <= balance)
		{
			balance -= amount;
			cout << "Bill paid successfully .New balance" << balance << endl;

		}
		else
		{
			cout << "you have insufficient balance for paying bill" << endl;
		}
		break;


	case (4):cout << "your balance" << balance << endl;
		break;
	default:cout << "invalid choice";

		return 0;
	}
}