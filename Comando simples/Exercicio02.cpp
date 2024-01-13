//
// Created by nksaddam on 13/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float volume;
    float raio;
    float altura;

    cout<<"Informe o valor de Raio: "<<endl;
    cin>>raio;

    cout<<"Informe o valor da altura: "<<endl;
    cin>>altura;

    volume =  3.1415 * (raio * raio ) * altura;

    cout<<" Volume: "<<volume<<endl;

}