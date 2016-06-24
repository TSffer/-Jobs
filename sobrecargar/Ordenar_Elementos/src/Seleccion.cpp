#include "Seleccion.h"
#include <iostream>
using namespace std;

Seleccion::Seleccion(int* a,int x):Ordenar(a,x)
{
    lista = a;
    tamano=x;

}

void Seleccion::Ordenar_1()
{
    int temp=0 , j;
    for(int i=0;i<tamano-1;i++)
    {
        temp=i;
        for(j=i;j<tamano-1;j++)
        {
            if(lista[temp]>lista[j])
            {
                temp = j;
            }
        }
        if(temp!=i)
        {
            temp=lista[temp];
            lista[j]=lista[i];
            lista[i]=temp;
        }
    }
}
Seleccion::~Seleccion()
{
    //dtor
}
