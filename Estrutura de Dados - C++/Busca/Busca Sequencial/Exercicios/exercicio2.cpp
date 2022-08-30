#include <iostream>
using namespace std;

/*
1. Faça a busca sequencial só que ao invés de começar a busca pelo primeiro elemento, comece a buscar pelo último.


*/

int buscaSequencialInvertida(int v[], int x, int tam){
  // Como começamos a busca pelo final, então o índice inicial deve ser "tam-1"
  // i++ => i = i + 1
  // i-- => i = i - 1
     
  for(int i = tam-1; i > -1 ; i--){ 
     if(v[i] == x){
       return i;
     }
    // else: não faz nada
  }

  return -1; // quando retorna -1, é pq não achou o número que a função estava buscando
}

int main() {
    // chama a funcao que eu precise 
  int vetor [7]={5,2,9,4,5,10,8};

  cout << buscaSequencialInvertida(vetor, 13, 7) << endl;

}