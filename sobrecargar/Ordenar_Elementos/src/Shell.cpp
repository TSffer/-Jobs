#include "Shell.h"

Shell::Shell(int* a,int x):Ordenar(a,x)
{
    lista=a;
    tamano=x;
}

void Shell::Ordenar_1()
{
    int i,j,inc,temp;
    for(inc =1;inc<tamano;inc=inc*3+1);
        while(inc>0)
        {
            for(i=inc;i<tamano;i++)
            {
                j=i;
                temp =lista[i];
                while((j>=inc)&&(lista[j-inc]>temp))
                {
                    lista[j]=lista[j-inc];
                    j=j-inc;
                }
                lista[j]=temp;
            }
            inc/=2;
        }
}

Shell::~Shell()
{
    //dtor
}
