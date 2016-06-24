#ifndef BURBUJA_H
#define BURBUJA_H
#include <Ordenar.h>

class Burbuja : public Ordenar
{
    public:
        Burbuja(int* a, int x);
        void Ordenar_1();
        virtual ~Burbuja();

    protected:

    private:
};

#endif // BURBUJA_H
