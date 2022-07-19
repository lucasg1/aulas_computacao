// Busca linear para achar um valor em um vetor
#include <iostream>
using namespace std;

int busca_binaria_rec(int x, int esq, int dir, int v[]){
  if(esq == (dir - 1)){
    return dir;
  }
  else{
    int meio = (esq+dir)/2;
    if(v[meio] < x){
      return busca_binaria_rec(x, meio, dir, v);
    }
    else{
      return busca_binaria_rec(x, esq, meio, v);
    }
  }
}

int main(){

}