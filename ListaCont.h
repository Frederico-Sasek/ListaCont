#ifndef LISTACONT_H
#define LISTACONT_H

#include <iostream>

using namespace std;

class ListaCont
{
public:
    ListaCont(int tam);
    ∼ListaCont();
    int get(int k);
    int set(int k, int val);
    void insere(int val);
    void remove(int val);
    void imprime();
    bool busca(int val);
    void help();
private:
    int max; // capacidade maxima de elementos
    int n; // quantidade de nos na lista
    int *vet; // vetor que armazena a lista
    int buscaBinaria(int val);
};

#endif // LISTACONT_H
