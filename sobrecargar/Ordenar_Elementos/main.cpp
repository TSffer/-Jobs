#include <iostream>
#include "Ordenar.h"
#include "Burbuja.h"
#include "Insercion.h"
#include "Seleccion.h"
#include "Shell.h"
using namespace std;

int main()
{
    int tama;

    cout << "Ingrese la numero  de datos" << endl;
    cin>>tama;
    int* a=new int[tama];
    cout<< "Ingrese los datos: "<<endl;
    for (int i =0; i<tama; i++){
        cin>>a[i];
    }

    Burbuja pri(a, tama);
    cout<<"Ordenamiento por Burbuja: "<<endl;
    pri.Ordenar_1();
    pri.print();
    cout<<endl;

    cout<<"Ordenamiento por Insercion: "<<endl;
    Insercion segu(a,tama);
    segu.Ordenar_1();
    segu.print();
    cout<<endl;

    cout<<"Ordenamiento por Seleccion: "<<endl;
    Seleccion terc(a,tama);
    terc.Ordenar_1();
    terc.print();
    cout<<endl;

    cout<<"Ordenamiento por Shell: "<<endl;
    Shell cuar(a,tama);
    cuar.Ordenar_1();
    cuar.print();

    return 0;
}
