//
// Created by nksaddam on 15/05/23.
//

#include "Exercicio06.h"
#include <iostream>
using namespace std;

int main(){
    float distancia;
    cout<<"Informe a disntância percorrida: \n";
    cin>> distancia;
    float tempo;
    cout<<"Informe o tempo gasto: \n";
    cin>>tempo;

    float velociaM;
    float combustivel;

    velociaM = distancia /tempo;
    combustivel = distancia / 12;

    cout<<"Velocidade Média: "<< velociaM<<"\n";
    cout<<"Gasto de Combustivel: "<< combustivel<<"\n";
}