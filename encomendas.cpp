#include <iostream>

using namespace std;
int tipoDeEnvio (int a){
float peso;
int adicional = 0, valor;
cout<< "Qual o peso da encomenda (em kg)? "<<endl;
cin>> peso;
for (int i=0; i<= peso; i++){
    adicional = i;
 }
 return valor = a + adicional;
}

double tipoDeEnvio(double a){
float peso;
int adicional = 0 ;
double valor;
cout<< "Qual o peso da encomenda? "<<endl;
cin>> peso;
for (int i=0; i<= peso; i++){
    adicional = i;
 }
 return valor = a + adicional;
}

int main()
{
 int opcao;
 cout<< "Qual o tipo de envio desejado? "<< endl<< "1- Normal "<<endl<<"2- expresso "<<endl;
 cin>> opcao;
 int base1 = 10;
 double base2 = 15.5;
 if (opcao == 1){
    cout<< "O valor eh: "<< tipoDeEnvio(base1);
 }else if (opcao == 2){
    cout<< "O valor eh: " << tipoDeEnvio(base2);
 }else{
 cout<< "Selecione uma opcao valida!"<<endl;
 }
    return 0;
}
