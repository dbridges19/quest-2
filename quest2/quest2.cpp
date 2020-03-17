#include <iostream>
#include "Account.h"
#include "Database.h"
#include "Interaction.h"

using namespace std;

int main()
{
    Account testDummy, testDummier;
    Database mainDB;
   
    testDummy.id = 1;
    testDummier.id = 2;

    mainDB.addAccount(testDummy);
    mainDB.addAccount(testDummier);

    if (mainDB.findAccount(1)) {
        cout << "Ladies and gentlemen. We got em.";
    }

}


