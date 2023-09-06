#include <iostream>
#include <locale.h>
using namespace std;

void criarVetor(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor" << endl;
  cin >> tamanho;
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento do vetor" << endl;
    cin >> vetor[i];
  }

}

void verificar(int*& vetor, int& tamanho) {
  int positivo = 0;
  int negativo = 0;
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] > 0) {
      positivo++;
    }
    else {
      negativo++;
    }
  }
  cout << "tem " << positivo << " numeros positvos" << endl;
  cout << "tem " << negativo << " numeros negativos" << endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  criarVetor(vetor, tamanho);
  verificar(vetor, tamanho);

  return 0;
}