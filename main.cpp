#include <iostream>
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont m(4);
    m.insere(1);
    m.insere(2);
    m.insere(4);
    m.insere(5);
    //m.imprime();
    m.insereK(3,2);
    m.insereInicio(0);
    //cout << m.existe(3);
    //m.imprime();
    //m.imprime();
    m.help();
    return 0;
}
