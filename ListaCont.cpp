#include "ListaCont.h"

ListaCont::ListaCont(int tam){
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont(){
    delete[] vet;
}

int ListaCont::get(int k){
    if(k>=0 && k<n)
    {
        return vet[k];
    }
}

void ListaCont::set(int k,int val){
    if(k>=0 && k<n)
    {
        vet[k] = val;
    }
}
void ListaCont::copia(int v1[], int v2[]){
    for(int i = 0; i < max; i ++){
        v2[i] = v1[i];
        //cout << v1[i] << " ";
    }
    //cout  << endl;
}

void ListaCont::aumenta(){

    int *vetTemp = new int[max];
    copia(vet,vetTemp);
    delete [] vet;
    max = max+1;
    vet = new int[max];
    copia(vetTemp,vet);
    delete [] vetTemp;
}

void ListaCont::insere(int val){
    if(n == max)
        aumenta();
    vet[n++] = val;
}
void ListaCont::remove(){
    vet[n--] = 0;
}


void ListaCont::imprime(){
    for(int i = 0; i < n; i++)
    {
        cout << vet [i] << " ";
    }
    cout << endl;
}



bool ListaCont::busca(int val){
    for(int i = 0; i < n; i++)
    {
        if(val == vet[i])
            return true;
    }
    return false;
}

void ListaCont::help(){
    cout << "Comands List: "<<endl;
    cout << "ListaCont(int tam): constructor of the list"<<endl;
    cout << "tam -> the numeber of itens you want to creat the list"<<endl;

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



