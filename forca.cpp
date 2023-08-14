#include <iostream>
#include <windows.h>
#define TAM 26
#include <string.h>
using namespace std;

int main()
{
    char letra;
    char letras[TAM];
    string palavra;
    int i = 0,vidas = 6;
    cout<< "Digite a palavra que o seu amigo ira descobrir: "<<endl;
    cin>>palavra;
    system("cls");
    while (i<26){
        cout<< "Digite uma letra: " <<endl;
        cin>> letra;
        for(int k=0;k<palavra.length();k++){
            if (letra==palavra[k]){
                cout<< "Acertou uma letra! "<<endl<< "vidas: "<<vidas<<endl;;
            }else{
            vidas--;
             cout<< "voce errou! "<< endl <<vidas;
            }
            letras[k] = letra;
        }
    }
    return 0;
}
