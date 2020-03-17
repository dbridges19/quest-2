#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
public:
	Account();
	bool pay_in();
	bool pay_out();

private:
	int id;
	int pin;
	float balance;

};

bool Transfer(Account a, Account b) {
	cout << "Would you like to: " << endl
		<< "1) Withdraw from an account" << endl
		<< "2) Deposit into an account" << endl;

	int choice;

	cin >> choice;

	if (choice == 1) {
		a.pay_in();
		b.pay_out();
	}
	if (choice == 2) {
		b.pay_in();
		a.pay_out();
	}

}

#endif