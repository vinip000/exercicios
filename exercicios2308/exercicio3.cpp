#include <iostream>
#include <locale.h>
using namespace std;

void criar(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor: " << endl;
  cin >> tamanho;
  vetor = new int[tamanho];

  cout << "digite os elementos do vetor: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor[i];
  }
}
void verificar(int*& vetor, int& tamanho) {
  int numero;
  cout << "verificar elemento: " << endl;
  cin >> numero;
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == numero) {
      cout << "elemento encontrado" << endl;
    }
    else {
      cout << "elemento nao encontrado" << endl;
    }

  }
}


int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  criar(vetor, tamanho);
  verificar(vetor, tamanho);
  return 0;
}