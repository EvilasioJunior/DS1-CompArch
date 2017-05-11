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
    tam--;
    return lista[tam];
}

void deletar(cliente *lista)
{
    free(lista);
}

int main()
{
    
    return 0;
}
