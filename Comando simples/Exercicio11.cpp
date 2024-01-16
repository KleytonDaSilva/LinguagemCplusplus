//
// Created by nksaddam on 16/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float celsus, farenheit;

    cout<<"Informe o valor da temperatura em Farenheit: "<<endl;
    cin>>farenheit;

    celsus =(farenheit - 32) / 1.8000;

    cout<<"valor em Farenheit: "<<farenheit<<endl;
    cout<<"Valor em Celsius: "<<celsus;
}