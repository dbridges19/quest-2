#include "Account.h"
#include <iostream>

using namespace std;

Account::Account() {
	balance = 20; //set it to 20 to test transfer :)
	pin = 0;
	id = 0;
	
}


bool Account::pay_in(float x) {
	float deposit;

	deposit = x;

	if (deposit > 0) {
		balance += deposit;
		cout << "Deposit successful, your current balance is: " << balance << endl;
		return true;
	}

	else return false;
}

void Account::setPin(int x) { 
	pin = x;
}
int Account::getPin(int x) {
	x = pin;
	return x;
}

float Account::getBalance(Account x) {
	return x.balance;
}

void Account::setBalance(float x) {
	balance = x;
}

bool Account::pay_out(float x) {
	float withdrawAmmount;

	withdrawAmmount = x;

	if (withdrawAmmount > 0 && balance >= withdrawAmmount) {
		balance -= withdrawAmmount;
		cout << "Withdrawl successful, your current balance is: " << balance << endl;
		return true;
	}

	else return false;

}

bool Transfer(Account a, Account b) {
	cout << "Would you like to: " << endl
		<< "1) Withdraw from an account" << endl
		<< "2) Deposit into an account" << endl;

	int choice;

	cin >> choice;
	float amount;
	if (choice == 1) {
		cout << "Please enter an ammount to withdraw ";
		cin >> amount;
		b.pay_out(amount);
		a.pay_in(amount);
		return true;
	}
	else if (choice == 2) {
		cout << "Please enter an ammount to deposit ";
		cin >> amount;
		a.pay_out(amount);
		b.pay_in(amount);

		return true;

	}

	else return false;
}
