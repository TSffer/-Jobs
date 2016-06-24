#include "Burbuja.h"

Burbuja::Burbuja(int* a,int x):Ordenar(a,x)
{
    lista = a;
    tamano=x;
}

void Burbuja::Ordenar_1(){
    int temp;
    for(int i=0; i<tamano-1;i++)
    {
        for(int j=0;j<tamano-1;j++)
        {
            if(lista[j]>lista[j+1])
            {
                temp=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=temp;
            }
        }
    }

}
Burbuja::~Burbuja()
{
    //dtor
}
