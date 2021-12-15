#include "Facture.h"
#include <stdio.h>

void Facture::Affiche()
{

    cout << "****" << "Facture numero " << Facture::idFacture << "****" <<endl;
    cout << "Client : " << Facture::idClient << endl;
    cout << "\t" << Client::nom << endl;
    cout << "\t" << Client::adresse << endl;
    cout << endl;
    cout << "Montant Facture : " << Facture::depense << endl;
    cout << "Remise : "<<Facture::depense-Facture::apayer<<endl;
    cout<<"Somme a payer : "<<Facture::apayer;
    cout<<"*********************************";

};