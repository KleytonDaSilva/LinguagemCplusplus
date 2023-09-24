//
// Created by nksaddam on 16/09/23.
//

#include <iostream>
using namespace std;

int main() {

    string sexo;
    float altura,total;

    cout<<"Informe o sexo, M e F: "<<endl;
    cin>>sexo;

    cout<<"Informe a altura: "<<endl;
    cin>>altura;

    if(sexo == "m"){
        total = (72.7 * altura) -58;
    }else{
        if(sexo == "f"){
            total =(62.1 * altura) -44.7;
        }else{
            cout<<"Sexo nao encontrado"<<endl;
        }
    }

    cout<<"Peso ideal : "<<total<<endl;
}