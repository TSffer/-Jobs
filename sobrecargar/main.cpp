#include <iostream>
#include "lista.h"
#include "nodo.h"
#include <conio.h>
using namespace std;

int main()
{
    cout<<"Lista A"<<endl;
    lista A;
    A.add(5);
    A.add(6);
    A.add(9);
    A.add(1);
    A.add(8);
    A.add(4);
    A.print();

    cout<<"Lista B"<<endl;
    lista B;
    B.add(10);
    B.add(15);
    B.add(3);
    B.add(7);

    B.print();
    lista C;
    lista F;
    lista G;
    cout<<"Listas Sumadas"<<endl;
    C=A+B;
    C.print();

    cout<<"Listas Restada"<<endl;
    F=A-B;
    F.print();

    cout<<"Lista cancatenada"<<endl;
    G=A>B;
    G.print();

    cout<<"Lista Merge"<<endl;
    A<B;
    A.print();
    return 0;
}
