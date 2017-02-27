#include <iostream>
using namespace std;
void print_introduction();
double celsius_at_depth(double depth);
double celsius_to_fahrenheit(double celsius);
void print_conclusion(double depth, double celsius);
double depth;
double celsius;
double fahrenheit;


int main()
{
	char ans;
	do
	{

		print_introduction();
		cout << "Please enter the depth you wish calculated: ";
		cin >> depth;
		print_conclusion(depth, celsius);
		cout << "Would you like to run the program again? Y/N ?: ";
		cin >> ans;


	} while (ans == 'Y' || ans == 'y');

	return 0;
}

void print_introduction()
{
	cout << "This program will tell you the temperture at any depth of the earth in farenhight and celsius" << endl;
	return;
}
double celsius_at_depth(double depth)
{

	celsius = ((10 * depth) + 20);
	return celsius;
}
double celsius_to_fahrenheit(double celsius)
{

	fahrenheit = ((1.8*celsius) + 32);

	return fahrenheit;
}
void print_conclusion(double depth, double celsius)
{
	cout << "The temperture at the depth of " << depth << " kilometers in fahrenheit is " << celsius_to_fahrenheit(celsius) << " degrees" << ".\nThe tempurture at the depth of " << depth << " kilometers in celsius is " << celsius_at_depth(depth) << " degrees." << endl;
	return;
}
