#pragma once
#include "Account.h"
#include "Interaction.h"
#include <vector>
#ifndef DATABASE_H
#define DATABASE_H
class Database
{
public:
	Database(){}
	bool findAccount(int x);
	void addAccount(Account const& a);
	bool matchPin(int x);

private:
	vector<Account> accounts;
};
#endif

