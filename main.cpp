#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Insira um numero"<<endl;
    cin>> a;

    if (a%2==0){
        cout<< "O numero "<<a<< " eh par"<<endl;
    } else {
        cout<< "o numero " <<a<< " eh impar"<<endl;
    }
    return 0;
}
