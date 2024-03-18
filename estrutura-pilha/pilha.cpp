#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha() // construtora
{
  tamanho = 0;
  estrutura = new TipoItem[max_items];
}

pilha::~pilha() // destrutora
{
  delete[] estrutura;
}

bool pilha::estacheia() // verifica se a pilha esta cheia
{
  return (tamanho == max_items);
}

bool pilha::estavazia() // verifica se a pilha esta vazia
{
  return (tamanho == 0);
}

void pilha::inserir(TipoItem item) // insere item - push
{
  if (estacheia())
  {
    cout << "A pilha esta cheia!\n";
    cout << "Não é possivel inserir esse elemento!\n";
  }
  else
  {
    estrutura[tamanho] = item;
    tamanho++;
  }
}

TipoItem pilha::remover() // - pop
{
  if (estavazia())
  {
    cout << "A pilha esta vazia!\n"; // throw
    cout << "Nao tem elemento para ser removido!\n";
    return 0;
  }
  else
  {
    tamanho--;
    return estrutura[tamanho];
  }
}

void pilha::imprimir() // print
{
  cout << "Pilha: [ ";
  for (int i = 0; i < tamanho; i++)
  {
    cout << estrutura[i] << " ";
  }
  cout << "]\n";
}

int pilha::qualtamanho() // lenght F
{
  return tamanho;
}
