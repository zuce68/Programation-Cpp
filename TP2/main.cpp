#include "Etudiant.h"
#include <iostream>
using namespace std;

int main()
{
Etudiant monEtudiant;
monEtudiant.saisie("Misiuk","Pierre");
monEtudiant.affichage();
cout << "Moyenne de l'étudiant : " << monEtudiant.moy<<endl;
if(monEtudiant.admis())
{
cout << "Etudiant admis" << endl;
}
else
{
cout << "Etudiant non admis" << endl;
}
Etudiant monEtudiant2;
monEtudiant2.saisie("Yagoub","Walid");
monEtudiant2.affichage();
monEtudiant.exae_quo(monEtudiant2);


Etudiant_en_derniere_annee monEtudiant_EA;
monEtudiant_EA.saisie("Schwoerer","Mathieu");
monEtudiant_EA.affichage();
monEtudiant_EA.exae_quo(monEtudiant2);

return 1;
}