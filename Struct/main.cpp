
#include <iostream>
#include "carros.hpp"

using namespace std;

int main()
{
  Carro monza;
  monza.ano = 1999;
  monza.nome = "Monza";
  monza.marca = "Chevrolet";
  monza.preco = 10246;

  int tamanho = 0;
  cout << "Quantos carros deseja cadastrar? " << endl;
  cin >> tamanho;
  Carro* vetor_carros = new Carro[tamanho];

  cadastrar_carros(vetor_carros, tamanho);

  cout << "----------------------------------" << endl;

  imprimir_carros(vetor_carros, tamanho);

  cout << "----------------------------------" << endl;

  int ano = 0;
  cout << "Deseja procurar carros de qual ano? " << endl;
  cin >> ano;
  contar_ano(vetor_carros, tamanho, ano);

  cout << "----------------------------------" << endl;
  string nome = " ";
  cout << "Qual é o nome do carro que deseja atualizar o preço? " << endl;
  cin >> nome;
  float preco = 0;
  cout << "Qual é o novo preço? " << endl;
  cin >> preco;

  atualizar_preco(vetor_carros, tamanho, nome, preco);

  cout << "----------------------------------" << endl;

  float preco_inicial = 0;
  float preco_final = 0;
  cout << "Qual é o preço inicial dos carros que deseja procurar? " << endl;
  cin >> preco_inicial;
  cout << "Qual é o preço final dos carros que deseja procurar? " << endl;
  cin >> preco_final;

  listar_por_faixa(vetor_carros, tamanho, preco_inicial, preco_final);

  cout << "----------------------------------" << endl;

  string marca = "";
  cout << "Qual é o marca de carro que deseja procurar? " << endl;
  cin >> marca;

  listar_por_marca(vetor_carros, tamanho, marca);
}





