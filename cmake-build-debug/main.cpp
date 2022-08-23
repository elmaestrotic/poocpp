#include <iostream>
#include "AutoMovil.h"


int main() {
    AutoMovil *a=new AutoMovil();
    a->arrancar();
    a->acelerar();
    a->frenar();
    return 0;
}
