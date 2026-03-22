#include "ListaCont"

ListaCont::ListaCont(int tam){
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont()
{
    delete[] vet;
}

ListaCont::int get(int k){
    return vet[k];
}
ListaCont::void insere(int val){

}
ListaCont::void remove(int val){
}


ListaCont::void imprime(){
        
}



ListaCont::bool busca(int val){
        
}



