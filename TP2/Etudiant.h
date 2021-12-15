#include <iostream>

using namespace std;
class Etudiant
{
 public:
    string nom;
    string prenom;
    float moy;
    float tabnotes[10];
    Etudiant();
    void saisie(string n, string p);
    void affichage();
    float moyenne();
    bool admis();
    bool exae_quo(Etudiant E);
};

class Etudiant_en_derniere_annee : public Etudiant
{
    public: 
        float note_memoire;
        void saisie(string n,string p);
        void affichage();
        bool admis();
};