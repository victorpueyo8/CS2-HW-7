#include<iostream>
#include<string>
#include "ProductionWorker.h"

using namespace std;

void showinfoEmployee(const ProductionWorker&);

int main()
{
	string name, number, hireDate;
	int shift;
	double hourlyPay;

	cout << "What is the name of the employer: ";
	getline(cin, name);
	cout << "\nWhat is the ID of the employer ex. (000775467)? : ";
	getline(cin, number);
	cout << "\nWhen did the employer get hired mm/dd/yyyy: ";
	getline(cin, hireDate);
	cout << "\n\nWhich shift does the employer work on? (1 = Day / 2 = Night): ";
	cin >> shift;
	while (shift != 1 && shift != 2)
	{
		cout << "\n\nWhich shift does the employer work on? (1 = Day / 2 = Night): ";
		cin >> shift;
	}
	cout << "\nWhat is the hourly pay of the employer: ";
	cin >> hourlyPay;

	ProductionWorker employee1(name, number, hireDate, shift, hourlyPay);
	cout << endl << endl;
	
	showinfoEmployee(employee1);
}

void showinfoEmployee(const ProductionWorker &employee1)
{
	cout << "Employee's INFORMATION." << endl << endl;
	cout << "------------------------" << endl << endl;
	cout << "The employee's name: " << employee1.getName() << endl;
	cout << "The employee's ID number: " << employee1.getNumber() << endl;
	cout << "The employee's hire date: " << employee1.gethireDate() << endl << endl;

	if (employee1.getShift() == 1)
	{
		cout << "The employee's shift: Day" << endl;
	}
	else
	{
		cout << "The employee's shift: Night" << endl;
	}

	cout << "The employee's hourly Pay: $ " << employee1.gethourlyPay() << endl << endl;
}