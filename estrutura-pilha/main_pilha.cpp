#include <iostream>
#include "pilha.h"

using namespace std;

int main() {
  pilha pilha1;
  TipoItem item;
  int opcao;

  cout << "Programa gerador de pilha:\n";

  do {
    cout << "Digite 0 para parar o programa\n";
    cout << "Digite 1 para inserir um elemento\n";
    cout << "Digite 2 para remover um elemento\n";
    cout << "Digite 3 para imprimir a pilha\n";
    cout << "Digite 4 para verificar o tamanho da pilha\n";
    cout << "Digite 5 para verificar se a pilha esta vazia.\n";
    cout << "Digite 6 para verificar se a pilha esta cheia.\n";
    cin >> opcao;
    if (opcao == 1) {
      cout << "Digite o elemento a ser inserido:\n";
      cin >> item; 
      pilha1.inserir(item);
    } else if (opcao == 2) {
      item = pilha1.remover();
      cout << "Elemento removido: " << item << endl;
    } else if (opcao == 3) {
      pilha1.imprimir();
    } else if (opcao == 4) {
      pilha1.qualtamanho();
    }else if (opcao == 5) {
      pilha1.estavazia();
    }else if (opcao == 6) {
      pilha1.estacheia();
    }
  } while(opcao != 0); {
    return 0;
  };

}