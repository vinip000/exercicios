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

void verificar(int*& vetor, int& tamanho) {
  srand(time(NULL));
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 0) {
      cout << vetor[i] << endl;
    }
    else {
      int numeroAleatorio;
      do {
        numeroAleatorio = rand() % 100 + 1;
      } while (numeroAleatorio % 2 != 0);
      vetor[i] = numeroAleatorio; // Substitui o ímpar pelo número aleatório par
      cout << vetor[i] << endl;
    }
  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  srand(time(NULL));

  criar(vetor, tamanho);
  verificar(vetor, tamanho);

  return 0;
}
