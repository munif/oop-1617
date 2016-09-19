#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	int balance;
public:
	Account(int balance)
	{
		if (balance < 0)
		{
			cout << "The initial balance is invalid." << endl;
			this->balance = 0;
		}
		else
		{
			this->balance = balance;
		}
	}

	void credit(int balance)
	{
		this->balance += balance;
	}

	void debit(int balance)
	{
		if (this->balance < balance)
		{
			cout << "Debit amount exceeded account balance." << endl;
		}
		else
		{
			this->balance -= balance;
		}
	}

	int getBalance()
	{
		return this->balance;
	}

};

int main()
{
	Account a1(100);
	a1.debit(20);
	a1.credit(30);
	cout << "Final balance a1: " << a1.getBalance() << endl;

	Account a2(-100);
	a2.credit(100);
	a2.debit(20);
	cout << "Final balance a2: " << a2.getBalance() << endl;
	system("pause");
}