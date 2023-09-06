#include <iostream>
#include <locale.h>
#include <string> // Você precisa incluir a biblioteca <string> para usar a classe string.
using namespace std;

struct Carro {
  int ano;
  string marca;
  string modelo;
  float preco; // Construção do struct, nesse exemplo temos o cadastro de carros de diferentes marcas
};

void cadastrarCarros(Carro* carro, int tamanho) {
  int ano; // Criamos as variaveis que iremos usar no cadastramento dos carros
  string modelo;
  string marca;
  float preco;
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o modelo do carro: ";
    cin >> modelo;
    cout << "Digite a marca do carro: ";
    cin >> marca;
    cout << "Digite o ano do carro: ";
    cin >> ano;
    cout << "Digite o preço do carro: ";
    cin >> preco;
    Carro x;
    x.modelo = modelo; x.marca = marca; x.ano = ano; x.preco = preco; // Corrigir essa linha
    carro[i] = x; // Corrigir essa linha
  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho = 0;
  cout << "Quantos carros você quer cadastrar? " << endl;
  cin >> tamanho;

  Carro* vetor_carros = new Carro[tamanho];
  cadastrarCarros(vetor_carros, tamanho);
  return 0;
}
