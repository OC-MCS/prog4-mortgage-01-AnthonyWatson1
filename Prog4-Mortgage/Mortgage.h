#pragma once
// header file for Mortgage class
#include <cmath>
#include <cstdlib>

using namespace std;

class Mortgage
{
private:
	double Payment, Loan, Rate, Years, Term,Total;
	//This is for different pieces that can be
	//used for the formula to calculate 
	//The payment

public:
	//This is the constructor mostly to initialize
	Mortgage();

	//*******************
	//For the user to enter the amount they
	//Borrowed from the bank
	//********************

	double loanAmount(double);
	//***************
	//To set the interest Rate that will be
	//used to calculate the term
	//****************
	double interestRate() const;
	//******************
	//To get the number of years the
	//user has to pay back the loan
	//******************
	double numYears(double);
	//*****************
	//Calculate the length of the term 
	//*****************
	double calcTerm();
	//******************
	//TO calculate the monthly Payment
	//******************
	 double calcmonthlyPayment();
	//************
	//To show Payment
	//************
	double getmonthlyPayment();
	//******************
	//To get the total payment over the entirety
	//of the loan
	//*******************
	double calctotalOwed();
	//*************
	//TO show the total
	//*************
	double getTotal();
};