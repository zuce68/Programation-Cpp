#include <iostream>

using namespace std;

class Fraction{
    public:
    int numerateur, denominateur;
    Fraction(){}
    Fraction(int a, int b){
        numerateur=a;
        denominateur=b;
    };
    Fraction Affiche(){
      cout<<this->numerateur<<"/"<<this->denominateur<<endl;
    };
    Fraction operator*(Fraction &r){
        Fraction res(this->numerateur*r.numerateur,this->denominateur*r.denominateur);
        return res;
    }; 
    Fraction operator+(Fraction &r){
        
        if (this->denominateur == r.denominateur){
           Fraction res(this->numerateur+r.numerateur,r.denominateur);
           return res;
        }
        else
        {
            int tempde;
            tempde= this->denominateur;
            this->denominateur=this->denominateur*r.denominateur;
            this->numerateur=this->numerateur*r.denominateur;
            r.denominateur=r.denominateur*tempde;
            r.numerateur=r.numerateur*tempde;
            Fraction res((r.numerateur+this->numerateur),r.denominateur);
            return res;
        }
        
    }
    Fraction Simplifie()
    {
        int pgcd;  
        
    };
};

int main(){ 
    Fraction a(21,31), b(4,5);  
    Fraction d=a+b;
    d.Affiche();
    return 0;
}

