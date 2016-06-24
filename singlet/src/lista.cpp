#include "lista.h"
#include <iostream>
using namespace std;

lista* lista::unico = NULL;

lista::lista()
{
    primero=ultimo=NULL;
    //ctor
}
void lista::add(int el){
    if (!primero){
        primero=new nodo(el);
        ultimo=primero;
    }
    else{

        ultimo->sig=new nodo(el);
        ultimo=ultimo->sig;

    }
}

void lista:: print()
{
    nodo* temp;
    temp=primero;
    while(temp!=NULL){
        cout <<temp->dato<<endl;
        temp=temp->sig;
    }

}
lista::~lista()
{
}
