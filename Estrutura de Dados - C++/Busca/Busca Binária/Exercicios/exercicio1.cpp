#include <iostream>
#include <string>
using namespace std;
/*
Mude a busca binária para trabalhar com pesquisas em strings ao invés de inteiros.

Exemplo:
{1,3,5,8,10}

{"Aila", "Bruno", "Lucas", "Marcos", "Viviane"}

As pesquisas devem ser feitas pelos nomes. "Marcos" deve retornar o índice 3.
*/
int busca_binaria(string x, int n, string nomes[]){
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

    cout << "Esquerda = " << nomes[esquerda] << endl; // 3 ---> vetor[3]: valor na posição 3
    cout << "Meio = " << nomes[meio]<< endl;
    cout << "Direita = " << nomes[direita] << endl;
    cout << endl;

    // meio, esquerda e direita são as posições
    // v[meio], v[esquerda] e v[direita] são os valores
    if(nomes[meio] == x){
      return meio; // Função para e retorna a posição
    }
    // Caso o meio não seja igual ao valor procurado:
    if (nomes[meio] < x){ // o valor procurado está a direita do meio
      esquerda = meio + 1; //
    }
    else{ // o valor procurado está a esquerda do meio
      direita = meio - 1;
    }
  }

  return -1;
}

int main(){ //       0       1      2       3        4
  string nomes[] = {"aila","bruno","lucas","marcos","viviane"};

  int posicaoBuscada = busca_binaria("marcos",5, nomes);

  cout << "O valor buscado está na posição: " << posicaoBuscada << endl;
}

// É sempre importante lembrar de testar os casos de fronteira, nesse caso seria o início e o fim do vetor.