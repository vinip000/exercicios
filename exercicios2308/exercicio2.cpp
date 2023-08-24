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
void media(int* vetor, int& tamanho) {
  int soma = 0;
  float media = 0;
  for (int i = 0; i < tamanho; i++) {
    soma = soma + vetor[i];
  }
  media = soma / tamanho;
  cout << "A media dos elementos do vetor é: " << media << endl;
}
int main() {
  setlocale(LC_ALL, "portuguese");
  int* vetor;
  int tamanho;
  criar(vetor, tamanho);
  media(vetor, tamanho);
  return 0;
}