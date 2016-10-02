#pragma once
#include <string>
#include <iostream>

using namespace std;

class Employee
{
private:
	string fname;
	string lname;

	int salary;

public:
	Employee();
	Employee(string fname, string lname, int salary);
	~Employee();

	// setter
	void setFname(string fname);
	void setLname(string fname);
	void setSalary(int salary);

	// getter
	string getFname();
	string setLname();
	int getSalary();

private:
	void mySecretMethod();
	

};

