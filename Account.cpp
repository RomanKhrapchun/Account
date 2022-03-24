#include<iostream>
#include"Account.h"

using namespace std;

void Account::setSecondName(string value)
{
	SecondName = value;
}

bool Account::setAccountNumber(int value)
{
	if (value > 0)
	{
		AccountNumber = value;
		return true;
	}

	AccountNumber = 0;
	return false;
}

bool Account::setAccrualPercentage(double value)
{
	if (value > 0)
	{
		AccrualPercentage = value;
		return true;
	}

	AccrualPercentage = -value;
	return false;
}

bool Account::setBalance(double value)
{
	if (value > 0)
	{
		Balance = value;
		return true;
	}

	Balance = -value;
	return false;

}

void Account::WithdrawBalance(double value)
{
	Balance -= value;
}

void Account::DepositBalance(double value)
{
	Balance += value;
}

void Account::ConvertToDollars(double value)
{
	Balance = 29.70;
	Balance /= value;
}

void Account::ConvertToEuro(double value)
{
	Balance = 32.85;
	Balance /= value;
}

void Account::AccrualPercentageBalance(double value)
{
	value = (Balance * 15) / 100;
	value += Balance;
}

int Account::NumberToLetter(double value)
{
	int number;
	string array[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", 
		               "Thirteen", "Fourteen", "Fifthteen", "Sixteen", "Eighteen", "Nineteen", "Twenty", "Thirty", "Fourty", 
		               "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

	cout << "Enter the whole number : "; 
	cin >> number;

	if (number >= 1000)
	{
		int leftmostDigit = number / 1000;
		cout << array[leftmostDigit] << "Thousand";
		number -= leftmostDigit * 1000;
	}

	if (number >= 100)
	{
		int leftmostDigit = number / 100;
		cout << array[leftmostDigit] << "Hundred";
		number -= leftmostDigit * 100;
	}

	if (number >= 10)
	{
		int leftmostDigit = number / 10;
		cout << array[leftmostDigit] << " ";
		number -= leftmostDigit * 10;
	}

	cout << array[number];

	return 0;
}

bool Account::Init(string secondName, int accountNumber, double accrualPercentage, double balance)
{
	setSecondName(secondName);
	return setAccountNumber(accountNumber) && setAccrualPercentage(accrualPercentage) && setBalance(balance);
}

void Account::Read()
{
	string secondName;
	int accountNumber;
	double accrualPercentage;
	double balance;
	cout << " SecondName =  "; cin >> secondName;
	do
	{
		cout << " AccountNumber = "; cin >> accountNumber;
		cout << " AccrualPercentage =  "; cin >> accrualPercentage;
		cout << " Balance =  "; cin >> balance;
	} while (!Init(secondName, accountNumber, accrualPercentage, balance));
}

void Account::Display() const
{
	cout << " SecondName = " << SecondName << endl;
	cout << " AccountNumber = " << AccountNumber << endl;
	cout << " AccrualPercentage = " << AccrualPercentage << endl;
	cout << " Balance = " << Balance << endl;
}
