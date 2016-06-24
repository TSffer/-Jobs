#include <iostream>
#include "lista.h"
using namespace std;

int main()
{
    lista * a=lista::getinstancia();

    a->add(5);

    a->add(8);

    a->print();

    lista* b=lista::getinstancia();

    b->print();

    cout << "Hello world!" << endl;
    return 0;
}
