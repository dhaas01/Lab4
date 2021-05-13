/* Assignment: Lab 4
File name: HaasD_Lab4.cpp
Author: Deanna Haas
Date: September 19, 2019
Purpose: Create program from creating an algorithm to entering program instructions, declaring variables,
getting input and output, and debugging the program. */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//Declare variables and constants
	const double aREAoFsLICEiNCHES = 14.125;
	const double pI = 3.14159;
	const int nUMBERoFsLICESpERpERSON = 4;
	int diameterOfPizza;
	double radiusInches;
	int numberOfSlicesInPizza;
	double areaOfPizzaInches;
	int numberOfPeople;
	double numberSlicesNeeded;
	int numberOfPizzasNeeded;
	//Have the user enter the diameter of the pizza and how number of people
	cout << "What is the diameter of the pizza in inches?";
	cin >> diameterOfPizza;
	cout << "How many people will be at the party?";
	cin >> numberOfPeople;
	//Calculate the area of the pizza and the number of slices in the pizza
	radiusInches = static_cast <double> (diameterOfPizza) / 2;
	areaOfPizzaInches = static_cast <double> (pI) * (pow (radiusInches, 2));
	numberOfSlicesInPizza = static_cast <int> (areaOfPizzaInches) / aREAoFsLICEiNCHES; 
	//Calculate number of slices needed and how many pizzas needed
	numberSlicesNeeded = numberOfPeople * nUMBERoFsLICESpERpERSON;
	numberOfPizzasNeeded = ceil (static_cast <double> (numberSlicesNeeded) / numberOfSlicesInPizza);
	//Display diameter, area, number of slices, number of slices needed, and number of pizzas needed
	cout << endl;
	cout << "The diameter of the pizza is " << diameterOfPizza << " inches!" << endl;
	cout << fixed << setprecision(3) << "The area of the pizza is " << areaOfPizzaInches << " inches!" << endl;
	cout << "There are " << numberOfSlicesInPizza << " slices in one pizza!" << endl;
	cout << fixed << setprecision(0) << "You need total of " << numberSlicesNeeded << " slices of pizza." << endl;
	cout << "You should order " << numberOfPizzasNeeded << " of the " << diameterOfPizza << " inch pizzas." << endl;
	cout << endl;
	system("pause");
	return 0;
}
