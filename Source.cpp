#include<iostream>
#include"Account.h"

using namespace std;

int main()
{
	string secondName;
	double balance;
	double accrualPercentage;
	int number;

	Account z;
	z.Read();
	//z.setSecondName("Khrapchun");
	//z.setAccountNumber(1);
	//z.setAccrualPercentage(15.6);
	//z.setBalance(5206);
	//z.Display();

	cout << endl;

	cout << " SecondName =  "; cin >> secondName;
	z.setSecondName(secondName);
	z.Display();

	cout << endl;

	cout << " Withdraw =  "; cin >> balance;
	z.WithdrawBalance(balance);
	z.Display();

	cout << endl;

	cout << " Deposit =  "; cin >> balance;
	z.DepositBalance(balance);
	z.Display();

	cout << endl;

	cout << "Balance after the accrual percentage" << endl;
	z.AccrualPercentageBalance(balance);
	z.Display();

	cout << endl;

	cout << "Balance in dollars";
	z.ConvertToDollars(29.70);
	z.Display();

	cout << endl;

	cout << "Balance in euro";
	z.ConvertToEuro(32.85);
	z.Display();

	cout << endl;

	z.NumberToLetter(0);

	cout << endl;

	return 0;
}