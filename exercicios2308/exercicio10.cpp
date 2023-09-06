#include <iostream>
#include <locale.h>
using namespace std;


void criarVetor(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor" << endl;
  cin >> tamanho;
  for (int i = 0; i < tamanho;i++) {
    cout << "Digite o elemento do vetor" << endl;
    cin >> vetor[i];
  }
}

void verificarVetor(int*& vetor, int& tamanho) {
  int divisor;
  int divididos = 0;
  cout << "Digite o divisor dos elementos do vetor: " << endl;
  cin >> divisor;
  for (int i = 0; i < tamanho;i++) {
    if (vetor[i] % divisor == 0) {
      divididos++;
    }
    cout << "O elemento " << vetor[i] << " foi dividido " << divididos << " vezes" << endl;

  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor = new int[tamanho];
  criarVetor(vetor, tamanho);
  verificarVetor(vetor, tamanho);
  return 0;
}