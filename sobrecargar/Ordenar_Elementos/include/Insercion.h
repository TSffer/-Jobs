#ifndef INSERCION_H
#define INSERCION_H
#include <Ordenar.h>


class Insercion : public Ordenar
{
    public:
        Insercion(int* a,int x);
        void Ordenar_1();
        virtual ~Insercion();

    protected:

    private:
};

#endif // INSERCION_H
