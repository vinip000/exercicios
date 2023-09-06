#include <iostream>
#include "carros.hpp"

void cadastrar_carros(Carro* carros, int tamanho) {
  int ano;
  string nome;
  string marca;
  float preco;
  for (int i = 0; i < tamanho; i++) {

    cout << "digite o nome do carro: ";
    cin >> nome;
    cout << "digite o ano: ";
    cin >> ano;
    cout << "digite a marca: ";
    cin >> marca;
    cout << "digite o preço: ";
    cin >> preco;

    Carro carro;
    carro.ano = ano;
    carro.nome = nome;
    carro.marca = marca;
    carro.preco = preco;

    carros[i] = carro;
  }
}


void imprimir_carros(Carro* carros, int tamanho) {

  for (int i = 0; i < tamanho; i++) {
    Carro carro = carros[i];
    cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
  }

}

void contar_ano(Carro* carros, int tamanho, int ano) {

  int contador = 0;
  for (int i = 0; i < tamanho; i++) {
    Carro carro = carros[i];
    if (carro.ano == ano) {
      contador++;
    }
  }
  cout << "temos " << contador << " carros com o ano de " << ano << endl;
}

void atualizar_preco(Carro* carros, int tamanho, string nome_carro, float novo_preco) {

  int preco_antigo = 0;
  for (int i = 0; i < tamanho; i++) {
    Carro carro = carros[i];
    if (carro.nome == nome_carro) {
      preco_antigo = carro.preco;
      carro.preco = novo_preco;
    }
  }
  cout << "atualizamos o preco do " << nome_carro << " de " << preco_antigo << " para " << novo_preco << endl;
}


void listar_por_faixa(Carro* carros, int tamanho, float preco_inicial, float preco_final) {

  for (int i = 0; i < tamanho; i++) {
    Carro carro = carros[i];
    if (carro.preco >= preco_inicial && carro.preco <= preco_final) {
      cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
    }
  }

}

void listar_por_marca(Carro* carros, int tamanho, string marca) {

  for (int i = 0; i < tamanho; i++) {
    Carro carro = carros[i];
    if (carro.marca == marca) {
      cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
    }
  }
}

