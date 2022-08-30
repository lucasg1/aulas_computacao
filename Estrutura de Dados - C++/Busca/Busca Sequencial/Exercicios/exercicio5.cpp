#include <iostream>
#include <string>
using namespace std;

/*
5.1 Procura quantas vezes uma vogal aparece na frase.
5.2 Procure em uma frase quantas vezes 2 vogais aparecem consecutivamente.
Exemplo:
INPUT: "Busca Sequencial eh muito daora"
OUTPUT: 2
*/

int buscaVogaisSequenciais(string frase){
  int contador=0;
  // vou usar o || porque eu quero que somente um deles sejam igual.
 // Como estamos analisando os caracteres na posição "i" e "i+1" só precisamos ir até a penúltima posição do vetor, caso contrário não teríamos caractere na posição "i+1" quando chegassemos no final do vetor.
    // frase[i+1] == acessa o proximo caractere // pula a posicao .
  for(int i = 0; i < frase.size()-1; i++){
    if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
      if((frase[i+1]  == 'a' || frase[i+1] == 'e' || frase[i+1] == 'i' || frase[i+1] == 'o' || frase[i+1] == 'u')){
             contador++;
      }
    }
  }
  return contador;
}

int main() {
  string frase = "Busca sequencial eh muito daora";

  cout<<"A quantidade de vogais sequenciais é: " <<endl;

  cout << buscaVogaisSequenciais(frase) << endl;
}

/*

if(frase[i] == 'a' && frase[i] == 'e' && frase[i] == 'i' && frase[i] == 'o' && frase[i] == 'u')

frase[i] = 'o'

if(false && false && false && true && false){
  contador++;
}

false && false && false && true && false = false

false || false || false || true || false = true

x é um animal?
if(x == passaro || x == mamifero || x == peixe)
false || true || false = true

x é um passaro?
if(x == asas && x == bico && x == penas)
false && false && true = false
true && true && true == true

E lógico(&&) somente dá true quando todos são true
OU lógico(||) dá true quando pelo menos um é true
*/