#include "Insercion.h"

Insercion::Insercion(int* a,int x):Ordenar(a,x)
{
    lista = a;
    tamano=x;
}

void Insercion::Ordenar_1()
{
    int temp ,j;
    for(int i =0;i<tamano-1;i++)
    {
        j=i;
        temp=lista[i];
        for(int a=i; a>0;a--)
        {
            if(lista[i]>=lista[a])
            {
                lista[a]=temp;
                a=0;
            }
            if(lista[i]<lista[a])
            {
                lista[a]= lista[a-1];
            }
        }
    }
}

Insercion::~Insercion()
{
    //dtor
}
