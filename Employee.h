#pragma once
#include<string>

using namespace std;

class Employee
{
private:
	string name;
	string number;
	string hireDate;
public:
	Employee()
	{
		name = "";
		number = "";
		hireDate = "";
	}
	Employee(string n, string num, string date)
	{
		name = n;
		number = num;
		hireDate = date;
	}
	string getName() const
	{
		return name;
	}
	string getNumber() const
	{
		return number;
	}
	string gethireDate() const
	{
		return hireDate;
	}
};
