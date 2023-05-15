//
// Created by nksaddam on 15/05/23.
//

#include "Exercicio02.h"
#include <iostream>
using namespace std;

int main(){
    float salarioM;
    float salario;

    cout<<"------------------------------------------------------\n";
    cout<<" Imposto de renda 15%                                 \n";
    cout<<" INSS 5%                                              \n";
    cout<<" Aboo 60% em cima do salario minimo                   \n";
    cout<<"------------------------------------------------------\n";

    cout<<"Informe o salario minimo do País : \n";
    cin >> salarioM;
    cout<<"Informe o salario Bruto: \n";
    cin>> salario;
    float imposto;
    float inss;
    float abono;

    imposto =salario * 0.15;
    cout<<"Desconto do imposto de renda: \n"<< imposto<<"\n";
    inss = salario * 0.05;
    cout<<"Desconto do INSS: \n" << inss<<"\n";
    abono = salarioM * 0.60;
    cout<<"Acrescimo do abono: \n"<<abono<<"\n";

    cout<<"Salario liquido: \n"<< (salario - imposto - inss)+ abono<<"\n";

}

