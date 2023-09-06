#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

struct Filme {
  string nome;
  int ano;
  string diretor;
  string genero;
  float duracao;
};

void cadastrarfilme(Filme* filmes, int tamanho) {
  string nome;
  int ano;
  string diretor;
  string genero;
  float duracao;
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o nome do filme: ";
    cin >> nome;
    cout << "Digite o ano do filme: ";
    cin >> ano;
    cout << "Digite o diretor do filme: ";
    cin.ignore(); // Para evitar problemas com a entrada de strings com espaços
    getline(cin, diretor);
    cout << "Digite o gênero do filme: ";
    getline(cin, genero);
    cout << "Digite a duração do filme: ";
    cin >> duracao;
    Filme x;
    x.nome = nome;
    x.ano = ano;
    x.diretor = diretor;
    x.genero = genero;
    x.duracao = duracao;
    filmes[i] = x;
  }
  cout << "Filmes cadastrados com sucesso!" << endl;
  cout << endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho = 0;
  cout << "Digite o número de filmes: ";
  cin >> tamanho;

  Filme* vetor_filmes = new Filme[tamanho];
  cadastrarfilme(vetor_filmes, tamanho);

  return 0;
}
