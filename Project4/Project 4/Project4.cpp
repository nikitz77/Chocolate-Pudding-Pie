/*
Author: Karenina Zaballa
Assignment : Project 4 - Branching
Description: 
When sound travels through a gas, its speed depends primarily on the density of the medium. 
The less dense the medium, the faster the speed will be. Write a program that displays a menu allowing the user to select one of these four gases: Air, Methane, Carbon Dioxide or Water Vapor. 
After a selection has been made, the user should enter the number of seconds it took for the sound to travel in this medium from its source to the location at which it was detected. 
The program should then report how far away (in meters) the source of the sound was from the detection location. Assume 0 degrees Celcius at sea level.
Speed in meters per second:
Air - 331.5
CO2 - 258
Water Vapor - 402
Methane - 430
*/
#include <iostream>

using namespace std;

int main()
{
	const double AIR_SPEED = 331.5, CO2_SPEED = 258, WV_SPEED = 402, MET_SPEED = 430;
	int medium;
	double time, distance;
	int	const HI = 4, LO = 1;

	cout << "Enter your medium of choice:" << endl
		<< "\t1 - Air" << endl
		<< "\t2 - Carbon Dioxide" << endl
		<< "\t3 - Water Vapor" << endl
		<< "\t4 - Methane" << endl;
	cin >> medium;

	while (medium < LO || medium > HI)
	{
		cout << "\nInvalid input. Enter numbers " << LO << " - " << HI << " ONLY" << endl
			<< "\nEnter your medium of choice:" << endl
			<< "\t1 - Air" << endl
			<< "\t2 - Carbon Dioxide" << endl
			<< "\t3 - Water Vapor" << endl
			<< "\t4 - Methane" << endl;
		cin >> medium;
	}

	switch (medium)
	{
	case 1: //if medium is air
		cout << "\nPlease enter time in seconds:";
		cin >> time;
		distance = AIR_SPEED * time;
		break;

	case 2:
		cout << "\nPlease enter time in seconds:";
		cin >> time;
		distance = CO2_SPEED * time;
		break;

	case 3:
		cout << "\nPlease enter time in seconds:";
		cin >> time;
		distance = WV_SPEED * time;
		break;

	case 4:
		cout << "\nPlease enter time in seconds:";
		cin >> time;
		distance = MET_SPEED * time;
		break;
	}

	cout << "Your distance is: " << distance << " meters" << endl << endl;
	system("PAUSE");
	return 0;
}
/*
Enter your medium of choice:
1 - Air
2 - Carbon Dioxide
3 - Water Vapor
4 - Methane
6

Invalid input. Enter numbers 1 - 4 ONLY

Enter your medium of choice:
1 - Air
2 - Carbon Dioxide
3 - Water Vapor
4 - Methane
1

Please enter time in seconds:50
Your distance is: 16575 meters

Press any key to continue . . .
*/