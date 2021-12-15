#include <iostream>
#include "cercle.h"
using namespace std;

int main(){
    Cercle monCercle(10,10,10);
    cout<<"Perimetre : "<<monCercle.perimetre()<<" Surface : "<< monCercle.surface() << " Inclus : "<<monCercle.encercle(10,10)<<endl;
    return 0;
}

