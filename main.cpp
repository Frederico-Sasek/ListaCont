#include <iostream>
#include "ListaCont.h"

using namespace std;

int main(){
    ListaCont m(4);
    m.insere(1);
    m.insere(2);
    m.insere(4);
    m.insere(5);
    //m.imprime();
    m.insereK(3,2);
    m.insereInicio(0);
    m.insere(6);
    m.insereInicio(7);
    //m.imprime();
    //cout << m.existe(3);
    m.ordena();
    //m.imprime();
    //m.limpa();
    //cout << m.menor();
    //m.imprime();
    m.help();
    return 0;
}
