#pragma once
#include<string>

using namespace std;

class Account
{
private:
	string SecondName;
	int AccountNumber;
	double AccrualPercentage;
	double Balance;

public:

	string getSecondName() const { return SecondName; }
	int getAccountNumber() const { return AccountNumber; }
	double getAccrualPercentage() const { return AccrualPercentage; }
	double getBalance() const { return Balance; }

	void setSecondName(string);
	bool setAccountNumber(int);
	bool setAccrualPercentage(double);
	bool setBalance(double);

	void WithdrawBalance(double);
	void DepositBalance(double);
	void ConvertToDollars(double);
	void ConvertToEuro(double);
	void AccrualPercentageBalance(double);
	int NumberToLetter(double);

	bool Init(string secondName, int accountNumber, double accrualPercentage, double balance);
	void Read();
	void Display() const;

};