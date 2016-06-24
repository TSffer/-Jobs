#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>

class lista
{
    public:
        static lista* getinstancia(){
            if (unico==NULL)
                unico=new lista();
            return unico;
        }
        nodo* primero;
        nodo* ultimo;

        void add(int el);
        void print();
        virtual ~lista();
    protected:

    private:
        lista();
        static lista* unico;
};


#endif // LISTA_H
