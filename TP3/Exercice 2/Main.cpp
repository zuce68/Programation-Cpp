#include <iostream>

using namespace std;

class list
{
    public:
        int occ;
        int result;
        list(int);
        list();
        void Add(int);
        void Begin();
        void End();
        void List();
};

void list::List()
{

}

void list::Add(int i)
{
    list monAdd;
    monAdd.Add(i);
}

int main(int argc, char* argv[])
{
    list maliste;
    maliste.Add(2);
    maliste.Add(3);
    cout << maliste(1) << endl;
    return 0;
}