#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;
void criar(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor: " << endl;
  cin >> tamanho;
  vetor = new int[tamanho];
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento: " << endl;
    cin >> vetor[i];
  }
}
void verifcar(int*& vetor, int& tamanho, int& taryck) {
  int pares;
  int impares;
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 0)
      cout << vetor[i] << endl;
  }
else {
  int taryck = rand() % 100 + 1;
  while (taryck % 2 != 0) {
    taryck = rand() % 100 + 1;

  }
}
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  srand(time(NULL));

  criar(vetor, tamanho);
  verifcar(vetor, tamanho);
  return 0;
}