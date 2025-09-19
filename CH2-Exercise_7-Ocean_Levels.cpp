/*File Name: CH2-Exercise_7-Ocean_Levels.cpp
Programmer: Sean G
Requirements:
Assuming the ocean's level is currently rising at about 1.5 milimeters per year, write a program that displays:
The number of milimeters higher than the current level that the ocean's level will be in 5, 7, and 10 years.*/

#include <iostream>
using namespace std;

int main()
{
	const double rateofwaterlevelrise = 1.5;

	double levelin5years = rateofwaterlevelrise * 5;
	double levelin7years = rateofwaterlevelrise * 7;
	double levelin10years = rateofwaterlevelrise * 10;

	cout << "Assuming the ocean's level is currently rising at about 1.5 milimeters per year:\n";
	cout << "The ocean's level will be " << levelin5years << " milimeters higher in 5 years.\n";
	cout << "The ocean's level will be " << levelin7years << " milimeters higher in 7 years.\n";
	cout << "The ocean's level will be " << levelin10years << " milimeters higher in 10 years.\n";

}

