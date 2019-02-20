//****************
//Anthony Watson
//Programming Assignment 4
//February 20, 2019
//****************
#include <iostream>
#include <iomanip>
#include "Mortgage.h"
using namespace std;

void loanAmount(Mortgage &loan)
{
	double amount;
	cout << "Please enter the loan amount: ";
	cin >> amount;
	if (amount < 0)
	{
		cout << "Error the amount must be greater than 0";
		exit(EXIT_FAILURE);
	}
	cout << endl;
	loan.loanAmount(amount);
}

void numYears(Mortgage &loan)
{
	double num;
	cout << "How many years do you have to pay it back? ";
	cout << "Please enter the number of years: ";
	cin >> num;
	if (num <= 0)
	{
		cout << "Error the number of Years must be greater than 0.";
		exit(EXIT_FAILURE);
	}
	cout << endl;
	loan.numYears(num);
}
int main()
{

	Mortgage account;
	const double interest_rate = .045;
	//Interest Rate for mortgage for 30 years but used
	//In this case just as interest rate
	double amount;
	double numyear;
	loanAmount(account);
	numYears(account);

	cout << "This is the Term amount that will be calculated: ";
	cout << account.calcTerm();
	cout << endl;

	cout << "This is the amount with Interest added per month: ";
	cout << "$" << setprecision(2) << fixed << account.calcmonthlyPayment();

	cout << endl;
	cout << "Here is the total amount you will have owed to the bank after the term is ended: ";
	cout << "$" << setprecision(2) << fixed << account.calctotalOwed();
	
	return 0;
}
