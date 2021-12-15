#include "Facture.h"

using namespace std;

int main()
{
    Client A("Dupont","Paris");
    Client B("Durand","Marseille");

    A.SetRemise(10);
    B.SetRemise(5);

    Facture f1(A,53.20);
    Facture f2(B,53.20);   

    Client C("Martin","Strasbourg");

    Facture f3(C,60.50);
    Facture f4(B,95.25);
    
    f4.Affiche();
    f3.Affiche();
    f2.Affiche();
    f1.Affiche();
    
    return 1;
}