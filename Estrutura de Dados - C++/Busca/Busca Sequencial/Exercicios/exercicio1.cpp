#include <iostream>
using namespace std;
/*
Exemplo
v = {1,2,3,4,10};

buscaSequencial(v, 10); // 4
buscaSequencial(v, 20); // -1: retorno quando o número buscado não existe no vetor
*/

/*

Dado um vetor ordenado de qualquer tamanho e dois números "x" e "y" que pertencem a esse vetor, utilizando a busca sequencial, calcule quantos números existem entre "x" e "y".

Exemplo:

Entradas:
p = {0,1,2,3,4, 5, 6, 7, 8, 9, 10,11, 12};
v = {1,3,5,7,10,12,13,15,20,23,55,110,220};
x = 10 e y = 110
Saída: 6

x = 15, y = 20
Saída: 0

p2 - p1 - 1 === buscaSequencial(y)-buscaSequencial(x)-1
*/

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
  int v[13] = {1,3,5,7,10,12,13,15,20,23,55,110,220}; // Vetor ordenado: ordem crescente
  int x = 10;
  int y = 110;
  
  cout << "A resposta é: " << buscaSequencial(v, y, 13) - buscaSequencial(v, x, 13) - 1 << endl;
}

/*
Dado um vetor ordenado de qualquer tamanho e dois números "x" e "y" que pertencem a esse vetor, utilizando a busca sequencial, calcule quantos números existem entre "x" e "y".

Exemplo:

Entradas:
v = {1,3,5,7,10,12,13,15,20,23,55,110,220};
x = 10 e y = 110

Saída: 6

*/