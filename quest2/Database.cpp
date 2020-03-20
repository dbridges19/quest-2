#include "Database.h"
bool Database::findAccount(int x) { //
	
	for (int i = 0; i < accounts.size(); i++) {
		if (x == accounts[i].id) {
			return true;
		}
	}

}

void Database::addAccount(Account const& a) { //Pushback account onto vector
	accounts.push_back(a);
}

Account Database::getAccount(int x) {
	Account y; //horrible way to do this but that's okay :)
	for (int i = 0; i < accounts.size(); i++) {
		if (i == accounts[i].id) {
			y = accounts[i];
			return y;
		}
	}
}

bool Database::matchPin(int x) {
	for (int i = 0; i < accounts.size(); i++) {
		if (x == accounts[i].id) {
			if (x == accounts[i].getPin(i)) {
				return true;
			}
			else return false;
			
			
		}
	}
}