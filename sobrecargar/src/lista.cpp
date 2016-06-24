#include "lista.h"
#include <iostream>
using namespace std;



lista::lista()
{
    primero = ultimo=NULL;
}



void lista::add(int el){
    if(!primero){
        primero = new nodo(el);
        ultimo = primero;
    }else{
        ultimo->sig=new nodo(el);
        ultimo = ultimo->sig;
    }
}

void lista::Ordenar()
{
    int con=0;
    nodo* temp=primero;
    nodo* temp2;
    int num;
    int num2;
    while(temp!=NULL){
        con++;
        temp=temp->sig;
    }temp=primero;
    for(int i=0;i<con-1;i++){
        for(int j =0;j<con-1;j++){
            num=temp->dato;
            temp2=temp->sig;
            num2=temp2->dato;
            if(num2<num){
                temp->dato=num2;
                temp2->dato=num;
            }temp=temp->sig;
        }temp=primero;
    }
}






lista& lista::operator+(lista B){
    nodo *temp = primero;
    nodo *aux = B.primero;

    lista A;

    bool ver=true;
    while(ver){
    	A.add(temp->dato + aux->dato);
    	temp = temp->sig;
    	aux = aux->sig;
    	if(aux==NULL){
    		while(temp!=NULL){
    			A.add(temp->dato);
    			temp = temp->sig;
    		}
    		ver = false;
    	}
    	else if(temp==NULL){
    		while(aux!=NULL){
    			A.add(aux->dato);
    			aux = aux->sig;
    		}
    		ver = false;
    	}
    }

    return A;
}

lista& lista::operator-(lista B){
   nodo *temp = primero;
    nodo *temp2 = B.primero;

    lista A;

    bool ver=true;
    while(ver){
    	A.add(temp->dato - temp2->dato);
    	temp = temp->sig;
    	temp2 = temp->sig;
    	if(temp2==NULL){
    		while(temp!=NULL){
    			A.add(temp->dato);
    			temp = temp->sig;
    		}
    		ver = false;
    	}
    	else if(temp==NULL){
    		while(temp2!=NULL){
    			A.add(temp2->dato);
    			temp2 = temp2->sig;
    		}
    		ver = false;
    	}
    }

    return A;
}




lista& lista::operator>(lista B){

    nodo *temp = primero;
	nodo *temp2 = B.primero;
	lista A;

	while(temp!=NULL){
		A.add(temp->dato);
		temp = temp->sig;
	}
	while(temp2!=NULL){
		A.add(temp2->dato);
		temp2 = temp2->sig;
	}

	return A;


}





void lista::operator<(lista B){
   ultimo->sig = B.primero;
   ultimo=ultimo->sig;
   Ordenar();

}



void lista::print(){
    nodo* temp;
    temp = primero;
    while(temp!= NULL){
        cout<<temp->dato<<endl;
        temp=temp->sig;
    }
}

lista::~lista()
{
    //dtor
}
