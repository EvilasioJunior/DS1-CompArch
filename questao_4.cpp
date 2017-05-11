#include <bits/stdc++.h>

using namespace std;

const int MAX = 1 << 20;
int tam;

struct cliente
{
    string nome, cpf;
};

cliente* criar()
{
    cliente *lista;
    lista = (cliente*)(malloc(MAX));
    return lista;
}

void inserir(cliente *lista, cliente c)
{   
    lista[tam] = c;
    tam++;
}

cliente remover(cliente *lista)
{
    cliente aux = lista[0];
    for(int i = 0; i < tam - 1; i++)
        lista[i] = lista[i + 1];
    return aux;
}

void deletar(cliente *lista)
{
    free(lista);
}

int main()
{
    
    return 0;
}
