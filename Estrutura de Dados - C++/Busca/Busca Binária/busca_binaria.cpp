// Busca linear para achar um valor em um vetor
#include <iostream>
using namespace std;

int busca_binaria(int x, int n, int v[]){
  // x é o valor buscado
  // n é o tamanho do vetor
  // v é o vetor
  // 1,3,8,24,25,31,66,334
  // esquerda = 1
  // meio =
  // direita = 334
  int esquerda, meio, direita;

  // Colocamos esses valores iniciais de esquerda e direita para corrigir os casos de fronteira.
  esquerda = 0; // índices: 0 até "n-1"
  direita = n-1; // valores: 1,3,8,24,25,31,66,334

  while(esquerda <= direita){
    // enquanto a esquerda estiver na esquerda
    meio = (esquerda+direita)/2; // (6+7)/2 = 6,5 ---> meio = 6

    cout << "Esquerda = " << esquerda << endl;
    cout << "Meio = " << meio << endl;
    cout << "Direita = " << direita << endl;
    cout << endl;

    // meio, esquerda e direita são as posições
    // v[meio], v[esquerda] e v[direita] são os valores
    if(v[meio] == x){
      return meio; // Função para e retorna a posição
    }
    // Caso o meio não seja igual ao valor procurado:
    if (v[meio] < x){ // o valor procurado está a direita do meio
      esquerda = meio + 1;
    }
    else{ // o valor procurado está a esquerda do meio
      direita = meio - 1;
    }
  }

  return -1;
}

int main(){
  int v[8] = {1,3,8,24,25,31,66,334};

  int posicaoBuscada = busca_binaria(66, 8, v);

  cout << "O valor buscado está na posição: " << posicaoBuscada << endl;
}

// É sempre importante lembrar de testar os casos de fronteira, nesse caso seria o início e o fim do vetor.