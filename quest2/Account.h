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

#endif