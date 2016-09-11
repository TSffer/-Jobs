#include <iostream>
using namespace std;
#include "prestamo.h"
bool validaFecha(fecha,fecha);


int main()
{
   int salir=0;
   double montoTotal=0;
   fecha fechaLimite;
   double montoAcumulado =0;
   cout <<"Fecha limite para solicitud de prestamo (dd/mm/yyyy): ";
   cin>>fechaLimite;
   cout<<"Monto total para prestar: ";
   cin>>montoTotal;
   while(salir==0)
   {
        fecha fa;
        prestamo p;
        p.captura();
        fa=p.obtenerFechaAutorizacion();
        if(validaFecha(fa,fechaLimite)==true)
        {
            montoAcumulado+=p.obtenerValor();
            p.imprimir();

        }if(montoAcumulado>=montoTotal)
        {
            salir=1;
        }else{
            cout<<"Desea SAlir(0=no, 1=si): ";
            cin>>salir;
        }
   }
   return 0;
}

bool validaFecha(fecha fa,fecha fechaLimite)
{
    bool resultado=true;
    if(fa.obtenerYear()>fechaLimite.obtenerYear())
    {
        cout<<"Fecha fuera de plazo"<<endl;
        resultado = false;
    }else{
        if(fa.obtenerYear()==fechaLimite.obtenerYear())
        {
            if(fa.obtenerMes()>fechaLimite.obtenerMes())
            {
                cout<<"Fecha fuera de plazo"<<endl;
                resultado =false;
            }else
                if(fa.obtenerMes()==fechaLimite.obtenerMes())
                {
                    if(fa.obtenerDia()>fechaLimite.obtenerDia())
                    {
                        cout<<"Fecha fuera de plazo"<<endl;
                        resultado=false;
                    }
                }
        }
    }return resultado;
}
