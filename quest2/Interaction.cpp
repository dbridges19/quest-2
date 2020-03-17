#include "Interaction.h"
#include "Account.h"
#include "Database.h"
#include <iostream>

using namespace std;

void Interaction::mainMenu() {
    Database mainDB;
    int menuChoice = 0;
    int accountsSize = 0;

    while (menuChoice == 0) {
        cout << "Welcome to the Orgimar Bank and Trust!" << endl
            << "1. Register an account" << endl
            << "2. Log in with ID and PIN" << endl
            << "3. Display balance" << endl
            << "4. Transfer money to another account" << endl
            << "5. Logout from your account" << endl
            << "6. Terminate the program." << endl;

        cin >> menuChoice;

        if (menuChoice == 1) { //Register an account
                Account phAccount; //placeholder account
                int pin;
                cout << "Please enter a PIN.";
                cin >> pin;
                phAccount.setPin(pin);
                phAccount.id = accountsSize + 1;
                accountsSize += 1;
                cout << " Your account id is: " << phAccount.id << endl;
                mainDB.addAccount(phAccount);
                menuChoice = 0;
            }

        if (menuChoice == 2) {
            int searchID;
            int searchPin;
            cout << "Please enter your account ID";
            cin >> searchID;
                if (mainDB.findAccount(searchID)) {
                    cout << "Please enter your pin";
                    cin >> searchPin;
                    if (mainDB.matchPin(searchPin)) {
                        cout << "yes";
                    }
                }
                else {

                }
        }

        if (menuChoice == 3) {

        }
    }
    
}
