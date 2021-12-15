#include <iostream>

using namespace std;

static int nb_mult;

double multipliction(double a, double b)
{
    nb_mult++;
    return a*b;
}

float Puissance_i(int a, int n){
int nb=a;
 while(n!=0)
 {
     a = multipliction(a,nb);
     n--;
 }
 return a;
}

float Puissance_r(int a, int n)
{
    if (n!=0){
    a=a*a;
    Puissance_r(a,n--);
    }   
}

int main()
{
    nb_mult = 0;
    cout<<"Puissance(3.0,15)= "<<Puissance_i(3,15)<<" en "<<nb_mult<<" calculs"<<endl;
    nb_mult=0;
    cout<<"Puissanc(3.0,15)= "<<Puissance_r(3,15)<<" en "<<nb_mult<<" calculs"<<endl;
    return 0;
}