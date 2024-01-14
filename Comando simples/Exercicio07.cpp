//
// Created by nksaddam on 14/01/24.
//
#include <iostream>
using namespace std;

int main() {

    string nome;
    float horas, dependentes, inss, ir, salario;

    cout<<"Informe o nome do funcionario: "<<endl;
    cin>>nome;

    cout<<"Informe as horas trabalhadas: "<<endl;
    cin>>horas;

    cout<<"Informe o numero de dependentes: "<<endl;
    cin>>dependentes;

    horas = horas * 10;
    dependentes = dependentes * 60.0;
    salario = horas + dependentes;
    inss = salario * 0.085;
    ir = salario * 0.05;

    cout<<"Funcionario: "<<nome<<endl;
    cout<<"Salario bruto :"<< salario<<endl;
    cout<<"Salario Liquido : "<<salario -ir - inss <<endl;
}