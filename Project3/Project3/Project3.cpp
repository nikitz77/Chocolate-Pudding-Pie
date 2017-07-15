/*
Author: Karenina Zaballa
Assignment: Project 3 - Expressions and Interactivity
Description: Calculate state tax and county tax and add their total
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
 
int main()

{
	const double COUNTY_SALES_TAX = .02, STATE_SALES_TAX = .0725;
	double sales, totalSales, totalSalesTax, countyTax, stateTax;
	int year;
	string months;

	cout << "Enter total sales collected:	$";
	cin >> totalSales;
	cout << " \nEnter sales months: ";
	cin.ignore();
	getline(cin, months);
	cout << "\nEnter sales year: ";
	cin >> year;

	sales = totalSales/ (COUNTY_SALES_TAX + STATE_SALES_TAX + 1);
	countyTax = sales * COUNTY_SALES_TAX;
	stateTax = sales * STATE_SALES_TAX;
	totalSalesTax = countyTax + stateTax;

	cout << "\n\nMonths: " << months << " " << year << endl
		 << "---------------------------" << endl
		 << "Total collected:" << setprecision(2) << fixed << right << setw(3) << "$" << totalSales << endl
		 << "Sales:          " << setprecision(2) << fixed << setw(3) << "$" << sales << endl
		 << "County Sales Tax:"<< setprecision(2) << fixed << setw(2) << "$" << countyTax << endl
		 << "State Sales Tax:" << setprecision(2) << fixed << setw(3) << "$" << stateTax << endl
		 << "Total Sales Tax:" << setprecision(2) << fixed << setw(3) << "$" << totalSalesTax << endl << endl; 
	
	return 0;
}
/*
Enter total sales collected: $12345.67

Enter sales months: Jan, Feb, March

Enter sales year: 2014


Months: Jan, Feb, March 2014
---------------------------
Total collected: $12345.67
Sales:           $11300.38
County Sales Tax:  $226.01
State Sales Tax:   $819.28
Total Sales Tax:  $1045.29
Press any key to continue . . .
*/