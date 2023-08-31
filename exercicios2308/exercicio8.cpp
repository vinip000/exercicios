#include <iostream>
#include <locale.h>
using namespace std;

void criar(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor: " << endl;
  cin >> tamanho;
  vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento do vetor: " << endl;
    cin >> vetor[i];
  }
}

void igualarvetores(int* vetor1, int* vetor2, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor2[i] = vetor1[i];
    cout << "Elemento do vetor 2: " << vetor2[i] << endl;
  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int* vetor1;
  int* vetor2;
  int tamanho;

  criar(vetor1, tamanho);
  vetor2 = new int[tamanho];

  igualarvetores(vetor1, vetor2, tamanho);

  return 0;
}