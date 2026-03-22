#include "ListaCont.h"

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
    if(k>=0 && k<n){
        return vet[k]
    }
}
ListaCont::void set(int k,int val){
    if(k>=0 && k<n){
        vet[k] = val
    }
}
ListaCont::void insere(int val){
    if(n < max){
        vet[n++] = val;
    }
}
ListaCont::void remove(int val){
    if(n < max){
        vet[n--] = 0;
    }
}


ListaCont::void imprime(){
        for(int i = 0; i < n; i++){
            cout << vet [i] << " ";
        }
        cout << endl;
}



ListaCont::bool busca(int val){
    for(int i = 0; i < n; i++){
        if(val == vet[i])
            return true;
    }
    return false;   
}

ListaCont::void help(){
    cout << "Comands List: "<<endl;
    cout << "ListaCont(int tam): constructor of the list"<<endl;
    cout << "tam -> the numeber of itens you want to creat the list"<<endl

    cout << "∼ListaCont(): Destructor comand"<<endl;

    cout << "int get(int k): returns the value of the position"<<endl;
    cout << "k -> is the position "<<endl;

    cout << "int set(int k, int val): replace the value of the position by val"<<endl;
    cout << "k -> is the position "<<endl;
    cout << "val -> the value to put in the list"<<endl;

    cout << "void insere(int val): put a value in the end of the list"<<endl;
    cout << "val -> the value to put in the end of the list"<<endl;

    cout << "void remove() remove the last value of the list"<<endl;
 
    cout << "void imprime(): Show every value in the list"<<endl;

    cout << "bool busca(int val): seek the existence of the value in the list"<<endl;
    cout << "val -> the value to find in the list"<<endl;
}



