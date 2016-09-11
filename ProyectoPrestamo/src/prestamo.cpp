#include "prestamo.h"
#include <iostream>
#include "fecha.h"
using namespace std;

prestamo::prestamo()
{
    int nro=0;
    persona=0;
    double val=0;
    fecha fa;
    establecer(nro,sol,val,fa);
}

void prestamo::establecer(int n,persona s,double v,fecha fa)
{
    establecerNumero(n);
    establecerSolicitante(s);
    establecerValor(v);
    establecerFechaAutorizacion(fa);
    establecerFechaDeEntrega(fa);
    establecerFechaDePago();

}

void prestamo::establecerNumero(int n);
{
    if(n>0)
    {
        numero=n;
    }else{
        numero=1;
    }
}

void prestamo::establecerSolicitante(persona s)
{
    Solicitante =s;
}

void prestamo::establecerFechaAutorizacion(fecha fa)
{
    fechaAutorizacion=fa;
}

void prestamo::establecerFechaDeEntrega(fecha fa)
{
    fechaEntrega=(fa+=7);
}

void prestamo::establecerFechaDePago()
{
    fecha fechaTrabajo = fechaEntrega;
    for(int i=0; i<6;i++)
    {
        fechaTrabajo+=30;
        fechaPago[i]=fechaTrabajo;
    }
}

fecha prestamo::obtenerFechaAutorizacion()
{
    return fechaAutorizacion;
}

double prestamo::establecerValor()
{
    return valor;
}

void prestamo::captura();
{
    int nro=0;
    persona sol;
    double vlr=0;
    fecha fa;
    int t=0;
    cout<<"\n---------Capturando los Datos de un Prestamo--------\n";
    cout<<"Numero: ";
    cin>>nro;
    cout<<"\nTipo de Captura de Datos de Solicitante (0=abreviados , 1=Completos): ";
    cin>>t;
    cout<<"Solicitante: ";

    if(t==0)
    {
        sol.capturar(true);
    }
    else{
        sol.capturar();
    }
    while(vlr<0)
    {
        cout<<"Valor: ";
        cin>>vlr;
        if(vlr<0)
        {
            cout<<"Valor invalido,ingrese un valor correcto"<<endl;
        }
    }
    cout<<"Fecha de Autorizacion(dd/mm/aaaa): ";
    cin>>fa;
    while (fa.obtenerDia()>20)
    {
        cout<<"Fecha de Autorizacion debe estar en los primeros 20 dias del mes"<<endl;
        cout<<"Intente de nuevo: "<<endl;
        cin>>fa;
    }establecer(nro,sol,vlr,fa);
}

void prestamo::imprimir()
{
    cout<<"\n------Imprimir los datos de un proceso-------\n";
    cout<<"Numero de Prestamo: "<<numero<<"\n";
    cout<<"Fecha de autorizacion: "<<fechaAutorizacion<<"\n";
    cout<<"Fecha de Entrega (tentativa): "<<fechaEntrega<<"\n";
    cout<<"-----Detalle de Fechas de Pago------\n";
    for(int i=0; i<6;i++)
    {
        cout<<"Cuota"<<i<<":"<<fechaPago[i]<<endl;
    }
}

void persona::captura(bool x)
{
    char id[14];
    char pn[20];
    char pa[20];
    telefono tcasa;
    telefono tmov;
    cout<<"\n-----------Datos Personales----------"<<endl;
    cout<<"Identidad";
    cin.ignore();
    cin.getline(id,14);
    cout<<"Primer Nombre: ";
    cin.getline(pn,20);
    cout<<"Primer Apellido: ";
    cin.getline(pa,20);
    cout<<"--Para numeros telefonicos utilice este formato: (xxx) xxx-xxxx ext.xxx--\n";
    cout<<"Telefono de Casa: \n";
    cin>>tcasa;
    cout<<"Telefono Movil:\n";
    cin>>tmov;
    establecerIdentidad(id);
    establecerPrimerNombre(pn);
    establecerPrimerApellido(pa);
    establecerTelefonoCasa(tcasa);
    establecerTelefonoMovil(tmov);
}
prestamo::~prestamo()
{
    //dtor
}
