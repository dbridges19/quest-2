#include "Interaction.h"
#include <iostream>
using namespace std;

void Interaction::mainMenu() {
    int menuChoice = 0;
    while (menuChoice == 0) {
        cout << "Welcome to the Orgimar Bank and Trust!" << endl
            << "1. Register an account" << endl
            << "2. Log in with ID and PIN" << endl
            << "3. Transfer money to another account" << endl
            << "4. Logout from your account" << endl
            << "5. Terminate the program." << endl;

        cin >> menuChoice;
    }
}-