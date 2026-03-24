#include <iostream>
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont m(2);
    m.insere(1);
    m.insere(2);
    //m.imprime();
    m.insere(3);
    m.insere(4);
    m.imprime();
    m.remove();
    m.imprime();
    //m.help();
    return 0;
}
