#include <iostream>
#include <locale.h>
using namespace std;

void criarVetor(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor" << endl;
  cin >> tamanho;
  vetor = new int[tamanho];
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento do vetor" << endl;
    cin >> vetor[i];
  }
}

void verificar(int*& vetor, int& tamanho) {
  for (int i = 0; i < tamanho / 2; i++) {
      // Troca os elementos do início com os elementos do fim
    int temp = vetor[i];
    vetor[i] = vetor[tamanho - 1 - i];
    vetor[tamanho - 1 - i] = temp;
  }

  cout << "Vetor invertido:" << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor; // Declare vetor como um ponteiro para int
  criarVetor(vetor, tamanho);
  verificar(vetor, tamanho);
  delete[] vetor; // Libere a memória alocada para o vetor
  return 0;
}