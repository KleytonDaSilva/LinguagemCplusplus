//
// Created by nksaddam on 08/09/23.
//

#include <iostream>
using namespace std;

int main() {
    string sexo;

    cout<<"Informe sexo, M para masculino e F para feminino"<<"\n";
    cin>> sexo;

    if(sexo == "m" || sexo == "f"){
        cout<<"Sexo valido";
    }else{
        cout<<"Sexo invalido";
    }
}