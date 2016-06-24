#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"


class lista
{
    public:
        nodo* primero;
        nodo* ultimo;
        lista();
        void add(int);
        void invertir();
        void sumar();
        void insertar(int pos, int val);
        void Ordenar();

        lista& operator+(lista);
        lista& operator-(lista);

        lista& operator >(lista);
        void operator <(lista);

        void print();
        virtual ~lista();
    protected:
    private:

};

#endif // LISTA_H
