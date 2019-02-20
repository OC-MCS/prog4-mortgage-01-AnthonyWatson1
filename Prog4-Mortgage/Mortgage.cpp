// implementation file for Mortgage class
#include "Mortgage.h"
#include <iomanip>
#include <cmath>
#include <cstdlib>

//*********
//Mortgage
//To initialize the private members
//**********
Mortgage::Mortgage()
{
	Payment = 0;
	Loan = 0;
	Rate = 0.045;
	Years = 0;
	Term = 0;
}
//*******************
	//For the user to enter the amount they
	//Borrowed from the bank
	//********************

double Mortgage::loanAmount(double amount)
{
	Loan = amount;
	return Loan;
}

//***************
//To set the interest Rate that will be
//used to calculate the term
//****************

double Mortgage::interestRate() const
{
	return Rate;
}

//******************
//To get the number of years the
//user has to pay back the loan
//*******************

double Mortgage::numYears(double numyears)
{
	Years = numyears;
	return Years;
}

//*****************
//Calculate the length of the term 
//*****************

double Mortgage::calcTerm()
{
	Term = pow(1 + (Rate / 12), 12 * Years);
	return Term;
}

//******************
//TO calculate the monthly Payment
//******************

double Mortgage::calcmonthlyPayment()
{
	Payment = (Loan * (Rate / 12) * Term) / (Term - 1);
	return Payment;

}

double Mortgage::getmonthlyPayment()
{
	return Payment;
}
//******************
//To get the total payment over the entirety
//of the loan
//*******************

double Mortgage::calctotalOwed()
{
	double Total;
	Total = Payment * Years;
	return Total;
}

double Mortgage::getTotal()
{return Total;}