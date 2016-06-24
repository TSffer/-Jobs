#ifndef ORDENAR_H
#define ORDENAR_H


class Ordenar
{
    public:

        int* lista;
        int tamano;

        Ordenar(int* a, int x);
        void print();

        virtual void Ordenar_1()=0;
        virtual ~Ordenar();

    protected:

    private:
};

#endif // ORDENAR_H
