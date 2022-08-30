#include <iostream>
using namespace std;

/*
3. Faça uma busca sequencial que procure no inicio e no fim do vetor ao mesmo do tempo. Esse algoritmo irá buscar o número começando das suas extremidas e irá parar quando chegar no meio do vetor.
*/

int buscaSequencialDupla(int v[], int x, int tam){
  int i = 0; // indice que começa do inicio do vetor
  int j = tam - 1; // indice que começa do final do vetor

  // Essa é a condição de parada para pararmos de procurar no vetor. Ou seja, se duas pessoas estão procurando numa fila, uma começa do inicio e a outra do final, essa é a condição para elas terem procurado todo mundo na fila.

  // Esses 2 casos são pra quando o tamanho do vetor é par ou ímpar. Se o vetor é par os indices não vão se encontrar, logo a condição de parada é j != i+1. Se o vetor é ímpar os indices vão se encontrar, logo a condição de parada é j != i.
  while(j != i+1 && j != i){
    //   TRUE   ||   FALSE = TRUE
    //   TRUE   &&   FALSE = FALSE --> Devemos usar esse
    cout << "Procurando nas posições: " << endl;
    cout << "i: " << i << endl; // esta percorendo alista i++
    cout << "j: " << j << endl;// esta percorendo alista j--
    if(v[i] == x){
      cout << "O iterador i encontrou o número buscado. Posição: " << i << endl;
      return i;
    }
    else if(v[j] == x){// comparacao
      cout << "O iterador j encontrou o número buscado. Posição: " << j << endl;
      return j; // retorna o numero da lista encontrado
    }
    // else: devemos continuar procurando

    i++; // o i passa pra casa da direita
    j--; // o j passa pra casa da esquerda

    // Vamos entrar agora nos casos especiais. Esses "ifs" só vão ser executados quando os iteradores estiverem no final das busca, ou seja, no meio do vetor, que é onde eles se encontram. Como são 2 tipos de casos especiais, um pros vetores de tamanho par (que quase se batem) e outro pros vetores de tamanho ímpar(que se batem), é por isso que dividimos os casos especiais em 2.

    if(j==i){ // se batem (vetor de tamanho ímpar)
      cout << "Entramos no caso em que j==i" << endl;
      if(v[i] == x){
        cout << "O iterador j e o i encontraram o número buscado. Posição: " << i << endl;
        return i;
      }
    }
    else if(j==i+1){// quase se batem  (vetor de tamanho par)
            cout << "Entramos no caso em que j==i+1" << endl;
        //eses os dois IF e para
      if(v[i] == x){
        cout << "O iterador i encontrou o número buscado. Posição do meio: " << i << endl;
        return i;
      }
      else if(v[j] == x){ //
        cout << "O iterador j encontrou o número buscado. Posição do meio: " << j << endl;
        return j;
      }
    }
  }

  return -1;
}

int main() {
  int vetor [8]={30,2,9,4,5,10,8,3};

  cout << buscaSequencialDupla(vetor, 5, 8) << endl;

}