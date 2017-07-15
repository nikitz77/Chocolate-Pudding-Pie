/* 
Author: Karenina Zaballa
Assignment: Project 2
Description: 
Calculation and output of stock purchase transaction
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int numShares = 600;
	double sharePrice = 21.77,
		wholeStockPrice, commAmount, totalPaid;
	const double PERCENT_COMM = .02;
	
	// calculations
	wholeStockPrice = numShares * sharePrice;
	commAmount = wholeStockPrice * PERCENT_COMM;
	totalPaid = wholeStockPrice + commAmount;

	// output statements

	// part 1
	cout << fixed << setprecision(2) << "The amount paid for stock alone is: $" << wholeStockPrice << endl
									 << "The amount of commission is: $"<< commAmount << endl
									 << "The total amount paid for both stock and commission is: $" << totalPaid << endl;
	cout << "   *\n"
		 << "  ***\n"
		 << " *****\n"
		 << "*******\n";
	
	//part 2
	cout << "\nchar is: " << sizeof(char) << " bytes.\n"
		 << "int is: " << sizeof(int) << " bytes.\n"
		 << "long long is: " << sizeof(long long) << " bytes.\n"
		 << "float is: " << sizeof(float) << " bytes.\n"
		 << "double is: " << sizeof(double) << " bytes.\n\n";

	return 0;
}

/*
The amount paid for stock alone is: $13062.00
The amount of commission is: $261.24
The total amount paid for both stock and commission is: $13323.24
   *
  ***
 *****
*******

char is: 1 bytes.
int is: 4 bytes.
long long is: 8 bytes.
float is: 4 bytes.
double is: 8 bytes.

Press any key to continue . . .

GRADE: 100/100
*/