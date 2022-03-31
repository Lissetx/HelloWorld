#include <iostream>
using namespace std;
string name;
char initial;
short age;
bool isAdult;
int zipcode;
float wage;
int daysWorked = 0;
int hoursWorkedPerDay[7];
float TAX = 0.1f;

int totalHours = 0;
float grossIncome;
float netIncome;

int main()
{
	std::cout << "Enter your first name: ";
	std::cin >> name;
	std::cout << "Enter last initial: ";
	std::cin >> initial;
	std::cout << "Enter Age: ";
	std::cin >> age;
	std::cout << "Enter zipcode: ";

	if (age >= 18)
	{
		isAdult = true;
	}
	else {
		isAdult = false;
	}

	std::cin >> zipcode;
	std::cout << "Enter wage: ";
	std::cin >> wage;
	std::cout << "Days worked: ";
	std::cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) 
	{
		std::cout << "Enter hours worked for day " << (i + 1) <<" :";
		std::cin >> hoursWorkedPerDay[i];
	}

	for (int x = 0; x < daysWorked; x++)
	{
		totalHours += hoursWorkedPerDay[x];

	}

	std::cout <<"\n" << name << " worked " << totalHours << " hours at $" << wage << " an hour.";

	for (int y = 0; y < daysWorked; y++)
	{
		grossIncome += (wage * hoursWorkedPerDay[y]);
	}

	std::cout << "\ngross income: $" << grossIncome;

	netIncome = grossIncome - (grossIncome * TAX);\

	std::cout << "\nnet income: $" << netIncome;

	std::cout << "\n \n \n \n";
} 
