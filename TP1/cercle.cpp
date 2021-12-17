#include "cercle.h"
#include <stdio.h>

using namespace std;


Cercle::Cercle(float x, float y, float rayon){
        this->x=x;
        this->y=y;
        this->rayon = rayon;
    };
float  Cercle::perimetre(){
          return ((rayon*2)*3.14);
    };
float Cercle::surface(){
        return ((rayon*rayon)*3.14);
    };
bool Cercle::encercle(float u, float v){
        if(u==x && v==y){
        return true;
        }
        return false;
    };
