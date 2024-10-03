/******************************************************************************/
/* Gagliano-Avila_Antonio_LoanPayments.cpp                                    */
/* Lab/Project: Loan Payments                                                 */
/* Current Semester: Fall 2024                                                */
/* Author: Antonio Gagliano-Avila                                             */
/* Purpose of Program: To calculate the number of years of the erm and the    */
/* payment amount using the users inputed alouan amount and APR.              */
/* Input Variables: Principal amount, anoual percentage rate(APR)             */
/* Output Variables: payment                                                  */
/******************************************************************************/

#include <iostream>
#include <iomanip>  
#include <cmath>    //Allows program to use general math equations

using namespace std;


int main()
{

double principal_amount;        // amount borrowed (P)
double annual_precentage_rate;  // anual percentage rate (APR)
double monthly_Percentage_rate; // monthly interest rate (i)
const int num_of_monthlyPayments= 12;     // montly paymwnts at a monthly interest (N)

const int NUM_OF_YEARS_3 = 3;   // term of the loan in 3 years
const int NUM_OF_YEARS_4 = 4;   // term of the loan in 4 years
const int NUM_OF_YEARS_5 = 5;   // term of the loan in 5 years
const int NUM_OF_YEARS_6 = 6;   // term of the loan in 6 years

// Get APR from user
cout << "What is your annual percentage rate(APR)?\n";
cin >> annual_precentage_rate;

//Get amount of loan from user
cout << "What is the amount of the loan?\n";
cin >> principal_amount;

// Calculate the monthly percentage rate(i) 
monthly_Percentage_rate = (annual_precentage_rate/100)/12;

// Calculte the Monthly Payment for 3 year term
double monthlyPayment1 = (principal_amount * monthly_Percentage_rate * pow(1+monthly_Percentage_rate, num_of_monthlyPayments*NUM_OF_YEARS_3))/
                    (pow(1+monthly_Percentage_rate,num_of_monthlyPayments*NUM_OF_YEARS_3)-1);
// Calculate the Monthly Payment for 4 year term 
double monthlyPayment2 = (principal_amount * monthly_Percentage_rate * pow(1+monthly_Percentage_rate, num_of_monthlyPayments*NUM_OF_YEARS_4))/
                    (pow(1+monthly_Percentage_rate,num_of_monthlyPayments*NUM_OF_YEARS_4)-1);
// Calculate the Monthly Payment for 5 year term
double monthlyPayment3 = (principal_amount * monthly_Percentage_rate * pow(1+monthly_Percentage_rate, num_of_monthlyPayments*NUM_OF_YEARS_5))/
                    (pow(1+monthly_Percentage_rate,num_of_monthlyPayments*NUM_OF_YEARS_5)-1);
// Calculate the Monthly Payment for 6 year term
double monthlyPayment4 = (principal_amount * monthly_Percentage_rate * pow(1+monthly_Percentage_rate, num_of_monthlyPayments*NUM_OF_YEARS_6))/
                    (pow(1+monthly_Percentage_rate,num_of_monthlyPayments*NUM_OF_YEARS_6)-1);

// Display the year and montly payment for that year
cout << "Term   Monthly\n" << "(yrs)  Payment\n" 
     << "  3    " << monthlyPayment1 << endl 
     << "  4    " << monthlyPayment2 << endl 
     << "  5    " << monthlyPayment3 << endl 
     << "  6    " << monthlyPayment4 << endl;     



    return 0;
}