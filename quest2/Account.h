#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;
class Account
{
public:
	Account();
	bool pay_in(float x);
	bool pay_out(float x);

private:
	int id;
	int pin;
	float balance;

};

bool Transfer(Account a, Account b);

#endif