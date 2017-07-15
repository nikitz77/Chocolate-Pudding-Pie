/*
Author: Karenina Zaballa
Assignment: ICE 5
Description: Pizza slice calculator
*/

#include <iostream>
#include <iomanip>
 
using namespace std;

 int main()
 {
	const double PIZZASLICE = 14.125, // in square inches
		PI = 3.14;
	const int PEOPLE_EAT = 4;
	double diameter, area, totalArea, sliceNum, pizzasNeeded;
	int numPartiers;

	cout<< "Please enter the diameter of the pizza:" << endl;
	cin>> diameter;

	area = pow((diameter / 2),2) * PI;
	sliceNum = area / PIZZASLICE;

	cout<<"\nThe number of slices for your pizza is:\n " << endl
	    << setprecision(1) << fixed << sliceNum <<endl;	


 /*
 Please enter the diameter of the pizza:
20

The number of slices for your pizza is:

22.2
Press any key to continue . . .
 */

 /*
 PART2:
 Description: Pizza Party Planner
 */

	cout <<"\nPlease enter the number of people attending your party:\n";
	cin>> numPartiers;
	cout<< "\nPlease enter the desired pizza diameter:\n";
	cin>> diameter;

	sliceNum = numPartiers * PEOPLE_EAT;
	totalArea = sliceNum * PIZZASLICE;
	area = pow((diameter / 2),2) * PI;
	pizzasNeeded = totalArea / area;

	cout<<"\nThe number of pizzas you will need are:" <<pizzasNeeded<<endl;

/*
Please enter the diameter of the pizza:
11

The number of slices for your pizza is:

6.7

Please enter the number of people attending your party:
10

Please enter the desired pizza diameter:
11

The number of pizzas you will need are:5.9
Press any key to continue . . .
*/

/*
PART 3: light-minutes to miles
*/

	const long MILES_PER_LIGHTMIN = 11176943.8;
	double lightmins, miles;

	cout<<"\nPlease enter light minutes:\n";
	cin>>lightmins;

	miles = lightmins * MILES_PER_LIGHTMIN;

	cout<< "The number of miles is:\n" << miles << endl;

/*
Please enter the diameter of the pizza:
11

The number of slices for your pizza is:

6.7

Please enter the number of people attending your party:
1

Please enter the desired pizza diameter:
11

The number of pizzas you will need are:0.6

Please enter light minutes:
43.3
The number of miles is:
483961631.9
Press any key to continue . . .
*/

	const long MILES_PER_LIGHTYR = 5.87849981e12 ;
	double lightyr, lightyrmiles;
	
	cout<<"\nPlease enter light years:\n";
	cin>>lightyr;

	lightyrmiles = lightyr * MILES_PER_LIGHTYR;

	cout<< "The number of miles is:\n" << lightyrmiles << endl;

	

	return 0;
 }
