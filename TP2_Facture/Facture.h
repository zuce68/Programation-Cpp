#include <iostream>

using namespace std;

class Client
{
    public : 
        static int idClient;
        static string nom;
        static string adresse;
        float tauxRemise;
        float montantTotal;
        Client(string nom,string adresse){idClient++;};
        void SetRemise(int remise);
};

class Facture
{   
    public :
        static int idFacture;
        static int idClient;
        float depense;
        float apayer;
        Facture(Client client,float depense){idFacture++;idClient=client.idClient;};
        void Affiche();
};