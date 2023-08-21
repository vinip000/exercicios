#include <iostream>

using namespace std;


float descontoBronze(float compra = 0){
    float taxa = 0.05;
    float desconto = 0;
    return desconto = compra - compra*taxa;
}
float descontoPrata(float compra = 0){
    float taxa = 0.1;
    float desconto = 0;
    return desconto = compra - compra*taxa;
}

float descontoOuro(float compra = 0){
    float taxa = 0.15;
    float desconto = 0;
    return desconto = compra - compra*taxa;
}

int main(){
    float compra;
    cout<< "Digite o valor da compra: "<<endl;
    cin>> compra;
    if (compra<200){
        cout<< "bronze: "<<descontoBronze(compra);
   }else if (compra <300){
        cout<< "Prata: "<< descontoPrata(compra);
   }else{
        cout<< "Ouro: "<< descontoOuro(compra);
   }
    return 0;
}
