//
// Created by nksaddam on 13/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float horas, valor, dependentes, salario;
    string nome;

    cout<<"Informe o nome do funcionario: "<<endl;
    cin>>nome;

    cout<<"Informe as Horas trabalhadas/mensais: "<<endl;
    cin>>horas;

    cout<<" Informe o valor Hora/Trabalhadas: "<<endl;
    cin>>valor;

    cout<<"Numero de dependentes: "<<endl;
    cin>>dependentes;

    salario = horas * valor;
    dependentes =  salario * (dependentes * 0.1);

    cout<<"Funcionario: "<<nome<<endl;
    cout<<"Salario: " << salario +  dependentes;



}