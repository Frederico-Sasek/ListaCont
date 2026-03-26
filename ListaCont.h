#ifndef LISTACONT_INCLUDE
#define LISTACONT_INCLUDE

#include <iostream>

using namespace std;

class ListaCont{
    public:
        ListaCont(int tam);
        ~ListaCont();
        int get(int k);
        void set(int k, int val);
        void insere(int val);
        void remove();
        void imprime();
        bool existe(int val);
        int busca(int val);
        void help();
        void insereInicio(int val);
        void removeInicio();
        void insereK(int val, int k);
        void removeK(int k);
        void limpa();
        int nuNos();
        void troca(int pos1 , int pos2);
        int maior();
        int menor();
        void ordena();




    private:
        int max;
        int n;
        int *vet;
        void aumenta();
        void aumenta(int novoMax);
        void auxOrdena(int esq,int dir);
        void copia(int v1[],int v2[]);
        int particionamento(int esq,int dir);



};

#endif // LISTACONT_INCLUDE
