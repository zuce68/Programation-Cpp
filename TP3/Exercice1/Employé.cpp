#include "Employé.h"
#include <map>
#include <string>
#include <random>

using namespace std;

int Employe::matricule=0;


string rand_nom()
{
   
    string out;
	string name;
	static const int namelen = 5;
	
	static const char* letters[2] = { "bcdfghjklmnpqrstvwxyz", "aeiouy" };
	static const int letterlen[2] = { strlen(letters[0]), strlen(letters[1]) };
	
	for (int i=0; i<namelen; i++)
		name += letters[i%2][rand()%letterlen[i%2]];
	name[0] = toupper(name[0]);


    for (int i=0; i<namelen; i++)
    {
    out+=name[i];
    }
   return out;
}

void Entreprise::affiche()
{
    for(pair<int,Employe> e:ListEmploye)
    { 
        cout<<e.second.nom<<" "<<e.second.prenom<<" "<<e.second.salaire<<" euros"<<endl;
    }
}

Employe::Employe(){}

void Entreprise::AugmentationGeneral(float taux)
{
    for(pair<int,Employe> e:ListEmploye)
    { 
        ListEmploye[e.first].salaire*=taux;
    }
}


Entreprise::Entreprise()
{
    srand(time(NULL));
    for(int u;u<5;u++)
    {
         Employe A(rand_nom(),rand_nom(),"Adresse Random mdr",rand());
         ListEmploye[A.matricule]=A;
    }
    Employe Test("Misiuk","Pierre","Adresse",rand());
    ListEmploye[Test.matricule]=Test;
}

