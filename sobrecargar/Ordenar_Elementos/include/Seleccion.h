#ifndef SELECCION_H
#define SELECCION_H
#include <Ordenar.h>

class Seleccion : public Ordenar
{
    public:
        Seleccion(int* a,int x);
        void Ordenar_1();

        virtual ~Seleccion();

    protected:

    private:
};

#endif // SELECCION_H
