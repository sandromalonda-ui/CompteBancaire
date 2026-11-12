
#include <iostream>
#include "compte_bancaire.h"

int main()
{
    CompteBancaire compte("Alexandre", 12345, 500.0);

    compte.afficherDetails();

    compte.deposer(200);
    compte.deposer(-50);

    compte.retirer(100);
    compte.retirer(1000);

    compte.afficherDetails();

    return 0;
}
