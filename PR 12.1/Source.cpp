
#include <iostream>

using namespace std;

struct Elem
{
    Elem* link1;
    Elem* link2;
    int info;
};


int main()
{
    Elem* p;
    p = new Elem;
    p->info = 1;
    p->link2 = new Elem;
    p->link1->info = 2;
    p->link1->link1 = p;
    p->link1->link2 = new Elem;
    p->link1->link1->info = 3;
    p->link1->link1->link2 = NULL;
    p->link2->link1 = p->link1;
    p->link2->link1 = p;
    p->link1->link1->link1 = new Elem;
    p->link2->info = 4;
    p->link1 = p->link1->link1;


    cout << (p->info) << endl;
    cout << (p->link1->info) << endl;
    cout << (p->link1->link1->info) << endl;
    cout << (p->link2->info) << endl;


    delete p->link2;
    delete p->link1->link1;
    delete p->link1;
    delete p;

    return 0;
}