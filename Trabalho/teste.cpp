#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

struct Livro {
  int quantidade;
  string nomeLivro;
};

void quantidadelivros(Livro* livro, int tamanho) {
  string nomeLivro;
  cout << "Digite o nome do livro que deseja verificar: ";
  cin >> nomeLivro;

  for (int i = 0; i < tamanho; i++) {
    if (livro[i].nomeLivro == nomeLivro) {
      cout << "Quantidade de c�pias ainda dispon�veis: " << livro[i].quantidade << endl;
      return;
    }
  }

  cout << "Livro n�o encontrado" << endl;
}

void retiradaLivros(Livro* livro, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o nome do livro: ";
    cin >> livro[i].nomeLivro;
    cout << "Digite a quantidade de c�pias: ";
    cin >> livro[i].quantidade;
  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho = 0;
  cout << "Quantos livros diferentes voc� ir� retirar?" << endl;
  cin >> tamanho;
  Livro* vetor_livros = new Livro[tamanho];
  retiradaLivros(vetor_livros, tamanho);
  quantidadelivros(vetor_livros, tamanho);

  return 0;
}
