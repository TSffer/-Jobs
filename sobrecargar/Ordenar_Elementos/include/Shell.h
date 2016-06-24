#ifndef SHELL_H
#define SHELL_H
#include "Ordenar.h"


class Shell : public Ordenar
{
    public:
        Shell(int* a, int x);
        void Ordenar_1();

        virtual ~Shell();

    protected:

    private:
};

#endif // SHELL_H
