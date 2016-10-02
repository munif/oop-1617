#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string fname, string lname, int salary)
{
	this->fname = fname;
	this->lname = lname;
	if (salary<0) 
		this->salary = 0;
	else 
		this->salary = salary;
}


Employee::~Employee()
{
	cout << "Destructing employee object with name " << this->fname + this->lname << endl;
}

void Employee::setFname(string fname)
{
	this->fname = fname;
}

void Employee::setLname(string lname)
{
	this->lname = lname;
}

void Employee::setSalary(int salary)
{
	this->salary = salary;
}

string Employee::getFname()
{
	return this->fname;
}

string Employee::setLname()
{
	return this->lname;
}

int Employee::getSalary()
{
	return this->salary;
}


void Employee::mySecretMethod()
{
	cout << "This is secret methods";
}
