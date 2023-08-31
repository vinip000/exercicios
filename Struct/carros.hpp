#ifndef CARROS_HPP
#define CARROS_HPP
#include <string>

using namespace std;

struct Carro {
  int ano;
  string nome;
  string marca;
  float preco;

};

void cadastrar_carros(Carro* carro, int tamananho);
void imprimir_carros(Carro* carro, int tamananho);
void contar_ano(Carro* carro, int tamananho);//Contar a quantidade de carros daquele ano
void atualizarpreco(Carro* carro, int tamananho, string nome_carro, float novoPreco);
void listarpotfaixa(Carro* carro, int tamananho, float precoInicial, float precofinal);


#endif