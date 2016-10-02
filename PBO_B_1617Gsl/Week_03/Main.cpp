#include <iostream>
#include "Employee.h"

int main()
{
	Employee e1("Abdul", "Munif", 1000);
	Employee *e2 = new Employee("Abc", "Def", 1000);

	
	//delete e1;
	delete e2;

	system("pause");

}