#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

struct Livro {
  int quantidade;
  string nomeLivro;
};

void verficarLivros()


void retiradaLivros(Livro* livro, int& tamanho) {
  for (int i = 0; i < tamanho; i++) {
    string nomeLivro;
    int quantidade;
    cout << "Digite o nome do livro: ";
    cin >> livro[i] = nomeLivro;
    cout << "Digite a quantidade de copias: ";
    cin >> livro[i] = quantidade;
    Livro x;
    x.quantidade = quantidade; x.nomeLivro = nomeLivro;
    livro[i] = x;
  }
}


int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho = 0;
  cout << "Quantos livros diferentes voce ira retirar?" << endl;
  cin >> tamanho;
  Livro* vetor_livros = new Livro[tamanho];
  retiradaLivros(vetor_livros, tamanho);
  quantidadelivros(vetor_livros);
  return 0;
}