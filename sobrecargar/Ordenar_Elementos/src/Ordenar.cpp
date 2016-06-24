#include "Ordenar.h"
#include <iostream>
using namespace std;

Ordenar::Ordenar(int* a, int x)
{
    lista=a;
    tamano=x;
}

void Ordenar::print()
{
    for(int i=0;i<tamano;i++){
        cout<<lista[i]<<" ";
    }
}

Ordenar::~Ordenar()
{
    //dtor
}
