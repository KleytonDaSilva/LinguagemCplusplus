//
// Created by nksaddam on 15/05/23.
//

#include "Exercicio04.h"
#include <iostream>
using namespace std;
int main(){
    float salarioMin;
    cout<<"Informe o salario minimo: \n";
    cin>>salarioMin;

    float total;
    total = 1000000000.00 / (salarioMin * 90);

    cout<<"Total de casas populares são : "<< total;
}