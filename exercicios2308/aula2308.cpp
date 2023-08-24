#include <iostream>
#include <locale.h>
using namespace std;
void imprimir(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << endl;
  }
}
void imprimirv2(int* vetor2, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << vetor2[i] << endl;
  }
}
void criar(int* vetor, int tamanho) {
  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;
  vetor = new int[tamanho];

  cout << "digite os elementos do vetor: ";
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor[i];
  }
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << endl;
  }
}
int main() {
  setlocale(LC_ALL, "portuguese");
  int* vetor;
  int tamanho;
  criar(vetor, tamanho);
  imprimir(vetor, tamanho);
  imprimirv2(vetor, tamanho);
  return 0;
}