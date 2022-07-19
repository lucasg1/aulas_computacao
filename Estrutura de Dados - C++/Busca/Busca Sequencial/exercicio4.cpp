#include <iostream>
#include <string>
using namespace std;

/*
4. Procure em uma String, quantas vezes um determinado caractere aparece.

Exemplo:
String = "Viviane" e Caractere = 'v'
Output = "2"

String = "Lucas" e caractere = 'v'
Output = "0"
*/
// se vc estive fazendo uma funcao ela precisar ser criada fora da MAIN  e chamada dentro da MAIN.

int buscasequencial(string frase,char letra){
  int contador=0;// para contar quantos vezes vai aparecer a letra
 // "a vida e bela"
  for(int i = 0; i < frase.size(); i++){
    if(frase[i] == letra){
        contador++;
    }
  }
  return contador; // porque quero saber quantidade de letras
}

int main() {
  string nome = "a vida e bela";
  char letra = 'a';
    // so para embelezar o codigo.
  cout<<"Quantidade de vezes que a letra " << letra << " aparece no nome " << nome << ":";
// esse e output origal para mostrar o resultado.
  cout << buscasequencial(nome,letra) << endl; //  aqui estamos chamando a função buscasequencial passando os parâmetros necessário para ela, que são 2: string nome e char letra. Como a função retorna um inteiro, o resultado dessa chamada, ou seja, o que irá ser printado na tela, é um inteiro
}
