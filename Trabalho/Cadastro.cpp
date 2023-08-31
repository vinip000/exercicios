#include <iostream>
#include <locale.h>
using namespace std;

void cadastro() {
  string nome;
  double cpf;
  double telefone;
  cout << "Digite seu nome: ";
  cin >> nome;
  cout << "Digite seu cpf: ";
  cin >> cpf;
  cout << "Digite seu telefone: ";
  cin >> telefone;
  cout << "Nome: " << nome << endl;
  cout << "cpf: " << cpf << endl;
  cout << "telefone: " << telefone << endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  cadastro();
  return 0;
}