#include "ListaCont.h"

ListaCont::ListaCont(int tam){
    max = tam*1.2;
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
    for(int i = 0; i < max; i ++)
    {
        v2[i] = v1[i];
        //cout << v1[i] << " ";
    }
    //cout  << endl;
}
void ListaCont::aumenta(){
    max = max*1.5;
    int *vetTemp = new int[max];
    copia(vet,vetTemp);
    delete [] vet;
    vet = new int[max];
    copia(vetTemp,vet);
    delete [] vetTemp;
}
void ListaCont::aumenta(int novoMax){
    max = novoMax;
    int *vetTemp = new int[max];
    copia(vet,vetTemp);
    delete [] vet;
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
bool ListaCont::existe(int val){
    for(int i = 0; i < n; i++)
    {
        if(val == vet[i])
            return true;
    }
    return false;
}
void ListaCont::insereInicio(int val){
    if(n == max)
        aumenta();
    for(int i = n; i >= 0; i--)
    {
        vet[i+1] = vet[i];
    }
    n++;
    vet[0] = val;
}
void ListaCont::removeInicio(){
    for(int i = 0; i < n; i++)
    {
        vet[i] = vet[i+1];
    }
    n--;
}
void ListaCont::insereK(int val, int k){
    if(n == max)
        aumenta();
    for(int i = n; i >= k; i--)
    {
        vet[i+1] = vet[i];
    }
    n++;
    vet[k] = val;
}
void ListaCont::removeK(int k){
    for(int i = k; i < n; i++)
    {
        vet[i] = vet[i+1];
    }
    n--;
}
int ListaCont::busca(int val){
    for(int i = 0; i < n; i++)
    {
        if(val == vet[i])
            return i;
    }
    return -1;
}
void ListaCont::troca(int pos1, int pos2){
    int temp;
    temp = vet[pos1];
    vet[pos1] = vet[pos2];
    vet[pos2] = temp;
}
int ListaCont::particionamento(int esq, int dir){
    int meio = (esq+dir)/2;
    troca(meio, esq);
    int i = esq;
    for(int j = esq+1; j <= dir; j++)
    {
        if(vet[j] < vet[esq])
        {
            i++;
            troca(i,j);
        }
    }
    troca(esq,i);
    return i;
}
void ListaCont::auxOrdena(int esq, int dir){
    if(esq < dir)
    {
        int p = particionamento(esq, dir);
        auxOrdena(esq, p-1);
        auxOrdena(p+1, dir);
    }
}
void ListaCont::ordena(){
    auxOrdena(0, n-1);
}
void ListaCont::limpa(){
    n = 0;
}
int ListaCont::nuNos(){
    return n;
}

int ListaCont::maior(){
    int m = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] > m)
            m = vet[i];
    }
    return m;
}
int ListaCont::menor(){
    int m = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] < m)
            m = vet[i];
    }
    return m;
}


void ListaCont::help(){
    cout << "Comands List: "<<endl;
    cout << "ListaCont(int tam): constructor of the list"<<endl;
    cout << "   tam -> the numeber of itens you want to creat the list"<<endl;

    cout << "∼ListaCont(): Destructor comand"<<endl;

    cout << "int get(int k): returns the value of the position"<<endl;
    cout << "   k -> is the position "<<endl;

    cout << "int set(int k, int val): replace the value of the position by val"<<endl;
    cout << "   k -> is the position "<<endl;
    cout << "   val -> the value to put in the list"<<endl;

    cout << "void insere(int val): put a value in the end of the list"<<endl;
    cout << "   val -> the value to put in the end of the list"<<endl;

    cout << "void remove() remove the last value of the list"<<endl;

    cout << "void imprime(): Show every value in the list"<<endl;

    cout << "bool existe(int val): seek the existence of the value in the list"<<endl;
    cout << "   val -> the value to find in the list"<<endl;

    cout << "void insereInicio(int val):  insert a value in the beggining of the list"<<endl;
    cout << "   val -> the value to insert in the list"<<endl;

    cout << "void removeInicio():  remove a value in the beggining of the list"<<endl;

    cout << "void insereK(int val, int k):  insert a value in the beggining of the list"<<endl;
    cout << "   val -> the value to insert in the list"<<endl;
    cout << "   k-> the position to insert in the list"<<endl;

    cout << "void removeK(int k):  remove a value in the beggining of the list"<<endl;
    cout << "   k-> the position to insert in the list"<<endl;

    cout << "int busca(int val):return the first position of the val in  the list"<<endl;
    cout << "   val -> the value to find in the list"<<endl;

    cout << "void ordena():  put the values in order"<<endl;

    cout << "void limpa():  clean the list"<<endl;

    cout << "void maior():  return the the largest value"<<endl;

    cout << "void menor():  return the lowest value"<<endl;

    cout << "void troca(int pos1,int pos2):  change the values"<<endl;
    cout << "   pos1 -> first position"<<endl;
    cout << "   pos2 -> second position"<<endl;

    cout << "int numNo():  return the number of the values in the list"<<endl;
}



