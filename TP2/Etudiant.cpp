#include <iostream>
#include "Etudiant.h"

using namespace std;


void Etudiant::saisie(string n, string p)
{
    Etudiant::prenom=p;
    Etudiant::nom=n;

    for(int i=0;i<10;i++)
    {
    cout << "Entrez une note : ";
    cin >> Etudiant::tabnotes[i];
    }
    Etudiant::moyenne();
}
Etudiant::Etudiant(){

}

bool Etudiant::exae_quo(Etudiant E)
{
if(E.moy==Etudiant::moy)
{
cout<<"Etudiant exequo"<<endl;
return true;
}
else
{
cout <<"Etudiant pas exequo" << endl; 
}
return false;
}

float Etudiant::moyenne()
{
    float moyenne;
for (int i = 0; i < 10; i++)
{
    moyenne += Etudiant::tabnotes[i];
}
moyenne=moyenne/10;
Etudiant::moy=moyenne;
return moyenne;
}

bool Etudiant::admis()
{
    if (moy>=10)
    {
        return true;
    }
    return false;
}




void Etudiant::affichage()
{
cout << "Nom : " << nom << endl;
cout << "Prenom : " << prenom << endl;
for(int i=0;i<10;i++)
{
   cout << "Note " << i+1 << " : " << Etudiant::tabnotes[i] << endl;
}
}




void Etudiant_en_derniere_annee::affichage()
{
cout << "Nom : " << Etudiant_en_derniere_annee::nom << endl;
cout << "Prenom : " << Etudiant_en_derniere_annee::prenom << endl;
for(int i=0;i<10;i++)
{
   cout << "Note " << i+1 << " : " << Etudiant_en_derniere_annee::tabnotes[i] << endl;
}
cout << "Note de mémoire : " << Etudiant_en_derniere_annee::note_memoire<<endl;

if(Etudiant_en_derniere_annee::admis())
{
cout << "Etudiant admis" << endl;
}
else
{
cout << "Etudiant non admis" << endl;
}
cout << "Moyenne : " << Etudiant_en_derniere_annee::moyenne() << endl;
}




void Etudiant_en_derniere_annee::saisie(string n, string p)
{
    Etudiant_en_derniere_annee::nom=n;
    Etudiant_en_derniere_annee::prenom=p;

    cout<<"Entrez la note de mémoire : ";
    cin >> Etudiant_en_derniere_annee::note_memoire;

    for(int i=0;i<10;i++)
    {
        cout << "Note " << i+1 << " : " << endl;
        cin >> Etudiant_en_derniere_annee::tabnotes[i];
    }
    Etudiant_en_derniere_annee::moyenne();
}

bool Etudiant_en_derniere_annee::admis()
{
    if(Etudiant_en_derniere_annee::moyenne() >=10 && Etudiant_en_derniere_annee::note_memoire>=10)
    {
        return true;
    }
    return false;
}



