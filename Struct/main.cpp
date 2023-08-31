#include <iostream>
#include <locale.h>
#include "carros.hpp"
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho = 0;
  cout << "Quantos carros vc quer cadastrar? " << endl;
  cin >> tamanho;

  Carro* vetor_carros = new Carro[tamanho];
  cadastrar_carros(vetor_carros, tamanho);
  return 0;
}