#include <iostream>

using namespace std;
int tipoDeEnvio(int a) {
  float peso;
  int adicional = 0, valor, pesobase = 5, peso1 = 0;
  cout << "Qual o peso da encomenda (em kg)? " << endl; // O preço adicional leva em conta somente o quilo do produto, sem se importar com os gramas
  cin >> peso;
  if (peso > pesobase) {
    peso1 = peso - pesobase;
  }
  else {
    cout << "valor a ser pago: " << a;
  }

  for (int i = 0; i <= peso1; i++) {
    adicional += 5;
  }
  return valor = a + adicional;
}

double tipoDeEnvio(double a) {
  float peso;
  int adicional = 0, pesobase = 5, peso1 = 0;
  double valor;
  cout << "Qual o peso da encomenda (em kg)? " << endl;
  cin >> peso;
  if (peso > pesobase) {
    peso1 = peso - pesobase;
  }
  else {
    cout << "valor a ser pago: " << a;
  }

  for (int i = 0; i <= peso1; i++) {
    adicional += 5;
  }
  return valor = a + adicional;
}


int main()
{
  int opcao;
  cout << "Qual o tipo de envio desejado? " << endl << "1- Normal " << endl << "2- expresso " << endl;
  cin >> opcao;
  int base1 = 10;
  double base2 = 15.5;
  if (opcao == 1) {
    cout << "O valor eh: " << tipoDeEnvio(base1);
  }
  else if (opcao == 2) {
    cout << "O valor eh: " << tipoDeEnvio(base2);
  }
  else {
    cout << "Selecione uma opcao valida!" << endl;
  }
  return 0;
}
