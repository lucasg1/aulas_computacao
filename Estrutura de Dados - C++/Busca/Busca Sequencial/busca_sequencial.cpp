#include <iostream>
using namespace std;

int buscaSequencial(int v[], int x, int tam){
  // x é o número que estamos buscando dentro do vetor
  for(int i = 0; i < tam; i++){
    if(v[i] == x){
      return i;
    }
    else if(v[i] > x){
      // Nesse caso, podemos parar a busca, pois como o vetor está ordenado e v[i] > x. Então "x" com certeza não está no vetor.
      return -1; //-1 é o nosso retorno quando o número não está no vetor
    }
  }

  return -1; // O número buscado não existe no vetor
}

int main() {
  int v[7] = {1,4,5,10,15,20,25}; // Vetor ordenado: ordem crescente

  cout << buscaSequencial(v, 5, 7) << endl;
}

/*
Dado um vetor ordenado de qualquer tamanho e dois números "x" e "y" que pertencem a esse vetor, utilizando a busca sequencial, calcule quantos números existem entre "x" e "y".

Exemplo:

Entradas:
v = {1,3,5,7,10,12,13,15,20,23,55,110,220};
x = 10 e y = 110

Saída: 6

*/