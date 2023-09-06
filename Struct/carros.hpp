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

void cadastrar_carros(Carro* carros, int tamanho);
void imprimir_carros(Carro* carros, int tamanho);
void contar_ano(Carro* carros, int tamanho, int ano);
void atualizar_preco(Carro* carros, int tamanho, string nome_carro, float novo_preco);
void listar_por_faixa(Carro* carros, int tamanho, float preco_inicial, float preco_final);
void listar_por_marca(Carro* carros, int tamanho, string marca);

#endif
