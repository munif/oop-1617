#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct Mahasiswa
{
	string nama;
	int usia;

	void speak()
	{
		cout << "Hello Mahasiswa!" << endl;
	}
};

class Student
{
private:
	string name;
	int age;

public:
	// Mutator --> set
	void setName(string input)
	{
		name = input;
	}
	// Accessor --> get
	string getName()
	{
		return name;
	}

	void setAge(int input)
	{
		if(input < 0 )
		{
			cout << "Age must be positive" << endl;
			age = 0;
		}
		else
		{
			age = input;
		}
		
	}

	int getAge()
	{
		return age;
	}
};

class Person 
{
private:
	string name;
	int age;

public:
	Person() // default constructor
	{
		this->name = "Default";
		this->age = 0;
	}

	Person(string name)
	{
		this->name = name;
		age = 0;
	}

	Person(int age)
	{
		this->age = age;
		this->name = "Default";
	}

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return this->name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return this->age;
	}

	void speak()
	{
		cout << "Hello Person!" << endl;
	}

	~Person()
	{
		cout << "Destroying object with name: " << name << endl;
	}

};


int main()
{
	/*
	Mahasiswa m1, m2;

	m1.nama = "Siapa";
	m1.usia = 20;
	
	m2.nama = "Dia";
	m2.usia = 19;

	Student s1, s2;
	s1.name = "Abdul Munif";
	s1.age = 20;

	cout << "Student 1: " << s1.name << ", " << s1.age << endl;
	*/


	// Contoh 2
	/*
	Mahasiswa m1;
	m1.speak();

	Person p;
	p.speak();
	*/

	// Contoh 3
	/*
	Student s1, s2;
	s1.setName("Munif");
	s1.setAge(-10);
	
	s2.setName("Abdul");
	s2.setAge(29);

	cout << "Student 1: " << s1.getName() << ", " << s1.getAge() << endl;
	*/

	// Contoh 4
	// Object instantiation
	Person p1; // default constructor Person()
	Person p2("Abdul Munif", 29);
	Person p3("Abc");
	Person p4(100);

	cout << "Person 1: " << p1.getName() << ", " << p1.getAge() << endl;
	cout << "Person 2: " << p2.getName() << ", " << p2.getAge() << endl;
	cout << "Person 3: " << p3.getName() << ", " << p3.getAge() << endl;
	cout << "Person 4: " << p4.getName() << ", " << p4.getAge() << endl;

	Person *p5 = new Person("Munif", 30);
	cout << "Person 5: " << p5->getName() << ", " << p5->getAge() << endl;
	delete p5;

	system("pause");

}