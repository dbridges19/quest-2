#include "Database.h"
bool Database::findAccount(int x) {
	
	for (int i = 0; i < accounts.size(); i++) {
		if (i == accounts[i].id) {
			return true;
		}
	}

}

void Database::addAccount(Account const& a) {
	accounts.push_back(a);
}

bool Database::matchPin(int x) {
	for (int i = 0; i < accounts.size(); i++) {
		if (i == accounts[i].id) {
			if (x == accounts[i].getPin(i)) {
				return true;
			}
		}
	}
}