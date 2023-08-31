#include <iostream>
#include <locale.h>
using namespace std;
void criar(int*& vetor, int& tamanho) {
  cout << "Digite a quantidade de elementos do vetor: " << endl;
  cin >> tamanho;
  vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento: " << endl;
    cin >> vetor[i];
  }
}
void verificar(int*& vetor, int& tamanho) {
  int menor = vetor[0];
  int maior = vetor[0];
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] <= menor) {
      menor = vetor[i];
    }
    if (vetor[i] >= maior) {
      maior = vetor[i];
    }
  }
  cout << "Menor: " << menor << endl;
  cout << "Maior: " << maior << endl;
}


int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  criar(vetor, tamanho);
  verificar(vetor, tamanho);
  return 0;
}