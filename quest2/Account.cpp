#include "Account.h"
#include <iostream>

using namespace std;

Account::Account() {
	balance = 10;
	pin = 0;
	id = 0;
	
}

bool Account::pay_in() {
	float deposit;

	cout << "Please enter a deposit ammount ";
	cin >> deposit;

	if (deposit > 0) {
		balance += deposit;
		cout << "Deposit successful, your current balance is: " << balance;
		return true;
	}

	else return false;
}

bool Account::pay_out() {
	float withdrawAmmount;

	cout << "Please enter an ammount to withdraw ";
	cin >> withdrawAmmount;

	if (withdrawAmmount > 0 && balance >= withdrawAmmount) {
		balance -= withdrawAmmount;
		cout << "Withdrawl successful, your current balance is: " << balance;
		return true;
	}

	else return false;

}