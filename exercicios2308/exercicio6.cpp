#include <iostream>
#include <locale.h>
using namespace std;

void criar(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;
  vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento " << i + 1 << ": ";
    cin >> vetor[i];
  }
}
void verificar(int*& vetor, int& tamanho) {
  int igual = 1;
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == vetor[i + 1])
      igual++;
  }
  cout << "o numero de elementos iguais é: " << igual << endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int* vetor;
  int tamanho;
  criar(vetor, tamanho);
  verificar(vetor, tamanho);
  return 0;
}