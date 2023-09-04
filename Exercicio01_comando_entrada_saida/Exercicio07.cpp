//
// Created by nksaddam on 04/09/23.
//
#include <iostream>
using namespace std;

int main(){
    string funcionario;
    cout<<"Informe o nome do funcionario: \n";
    cin>>funcionario;
    int horas_trabalhadas;
    cout<<"Horas trabalhadas no mes: \n";
    cin>>horas_trabalhadas;
    int dependentes;
    cout<<"Numeros de dependentes: \n";
    cin>>dependentes;
    float salario_bruto;
    salario_bruto = horas_trabalhadas * 10;
    float gratificacao;
    gratificacao = dependentes * 60;
    float inss;
    inss = salario_bruto * 0.085;
    float imposto;
    imposto = salario_bruto * 0.05;
    float  salario_liquido;

    salario_liquido = ((salario_bruto + gratificacao) - inss) -imposto;

    cout<<"Salario Bruto: "<< salario_bruto<<"\n";
    cout<<"Dependentes: "<< dependentes<<"\n";
    cout<<"Desconto do INSS: "<< inss<<"\n";
    cout<<"Desconto do imposto de renda "<< imposto<<"\n";
    cout<<"Salario Liquido "<< salario_liquido<<"\n";
}

