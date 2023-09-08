//
// Created by nksaddam on 08/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout<<"Informe o numero: "<<"\n";
    cin>>numero;

    if(numero >= 20 && numero <= 90){
        cout<<"Numero no intervalo de [20 , 90 ]"<<"\n";
    }else{
        cout<<"Numero fora do intervalo de [ 20 , 90 ]"<<"\n";
    }
}