#include "Employé.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
Entreprise* Test = new Entreprise; 
Test->affiche();
cout << Test->RechercheNom["Misiuk"].matricule << endl;
delete Test;
return 0;
}

