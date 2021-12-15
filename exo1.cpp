#include <iostream>

void mon_swap(int*,int*);

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    mon_swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

void mon_swap(int* j,int* k)
{
    int* temp;
    temp=j;
    j=k;
    k=temp;
}