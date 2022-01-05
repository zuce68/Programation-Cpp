#include <iostream>
#include<map>

using namespace std;

class Employe
{
 public:
    string nom;
    string prenom;
    string adresse;
    static int matricule;
    Employe(string nom,string prenom, string adresse,float salaire):nom(nom),prenom(prenom),adresse(adresse),salaire(salaire){matricule++;};
    Employe();
    float salaire;
    void test()
};

class Entreprise 
{
    public: 
        Entreprise();
        void affiche();
        void AugmentationGeneral(float taux);
        map<int,Employe> ListEmploye;
        map<string,Employe> RechercheNom;
};