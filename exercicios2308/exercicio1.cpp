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
void somar(int* vetor, int& tamanho) {
  int soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma = soma + vetor[i];
  }
  cout << "A soma dos elementos do vetor é: " << soma << endl;
}
int main() {
  setlocale(LC_ALL, "portuguese");
  int* vetor;
  int tamanho;
  criar(vetor, tamanho);
  somar(vetor, tamanho);
  return 0;
}