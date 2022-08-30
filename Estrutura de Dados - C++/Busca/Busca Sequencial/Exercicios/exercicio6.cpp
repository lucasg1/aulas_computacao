#include <iostream>
#include <string>
using namespace std;

/*
6. Construa uma Struct Aluno com 2 campos:

Nome: String
Identidade: Int (3 dígitos)

Utilizando um vetor de alunos construa uma base de dados de alunos e construa uma função para
buscar o nome de um aluno sendo dada sua identidade.
*/

struct Aluno{
    string nome;
    int identidade;
};

int main() {
    Aluno baseDeAlunos[5]; // cria um vetor de struct Alunos para ser a nossa base de dados
    int identidadeBuscada = 444;

    // cout << "Digite a identidade do aluno que deseja buscar: ";

    // cin >> identidadeBuscada;

    baseDeAlunos[0].nome = "Vivane dos Santos";
    baseDeAlunos[0].identidade = 123;

    baseDeAlunos[1].nome = "Lucas Bastos";
    baseDeAlunos[1].identidade = 321;

    baseDeAlunos[2].nome = "José Aldo";
    baseDeAlunos[2].identidade = 333;

    baseDeAlunos[3].nome = "Antonio Joao";
    baseDeAlunos[3].identidade = 444;

    baseDeAlunos[4].nome = "Maria da Silva";
    baseDeAlunos[4].identidade = 111;

    for(int i = 0; i < 5; i++){
        if(identidadeBuscada == baseDeAlunos[i].identidade){
            cout << "O nome do aluno buscado é: " << baseDeAlunos[i].nome;
        }
    }
}