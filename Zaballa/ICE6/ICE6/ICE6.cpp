/*
Author: Karenina Zaballa
Assignment: ICE 6
Description: Making Decisions Chapter 4 
*/
#include <iostream>
	using namespace std;

int main()
	{
		const double PI = 3.14159, TRIANGLE = 0.5; 
		double areaCircle, areaRectangle, areaRightTriangle, 
			rad, length, width, height, base;
		int QUIT = 4, choice;

		cout << "Please enter 1 - if you want the area of a circle\n"
			 << "\t2 - if you want the area of a rectangle\n"
			 << "\t3 - if you want the area of a right triangle\n"
			 << "\t4 - if you want to quit\n";	
		cin>> choice;
		
		if (choice == 1)
		{
			cout<<"\nEnter radius:\n";
			cin>> rad;

			areaCircle  = PI * pow(rad, 2);
			
			cout<< "Your circle's area is:\n" << areaCircle << endl;
		}
		else
			if (choice == 2)
			{
				cout << "\nEnter length of rectangle:\n";
				cin>> length;
				cout << "\nEnter width:\n";
				cin >>width;

				areaRectangle = length * width;

				cout <<"\nThe area of your rectangle is:\n" << areaRectangle << endl;
			}
			else
				if (choice == 3)
				{
					cout <<"\nEnter the base of your right triangle:\n";
					cin>> base;
					cout << "\nEnter the height of your right triangle\n";
					cin >> height;

					areaRightTriangle = TRIANGLE * base * height;

					cout <<"\nThe area of your right triangle is:\n" << areaRightTriangle << endl;
				}
				else
					if (choice == QUIT)
						cout << "\nThank you. Goodbye :)\n";
					else
						cout << "\nWrong input: You were supposed to put 1 through 4.\n";
/*
Please enter 1 - if you want the area of a circle
        2 - if you want the area of a rectangle
        3 - if you want the area of a right triangle
        4 - if you want to quit
2

Enter length of rectangle:
5

Enter width:
4

The area of your rectangle is:
20
Press any key to continue . . .
*/

	int year;

	cout << "\nEnter year:\n";
	cin >> year;

	if (400 == 0)
		cout << year << " is a leap year\n";
	else
		if (year % 100 == 0)
			cout << year << " is NOT a leap year\n";
		else
			if (year % 4 == 0)
				cout << year << " is a leap year\n";
			else
				cout << year << " is NOT a leap year\n";
	const int DAYS_YR= 365;
	const double C1 = 0.25, C2=.01, C3=1/400;
	unsigned int averageDaysPerYr;

	averageDaysPerYr = DAYS_YR + C1 - C2 + C3;

	cout << "The average days per year is " << averageDaysPerYr << endl;

		return 0;
	}

