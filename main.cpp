#include <iostream>
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont m(10);
    m.insere(5);
    m.insere(10);
    m.imprime();
    m.help();
    return 0;
}
