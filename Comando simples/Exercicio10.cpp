//
// Created by nksaddam on 14/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float salario_bruto, previdencia, alimentacao;

    cout << "Informe o salario bruto do funcionario: " << endl;
    cin>>salario_bruto;

    previdencia = salario_bruto * 0.1;
    alimentacao = salario_bruto * 0.3;

    salario_bruto = salario_bruto - previdencia -alimentacao;

    cout<<"Desconto da previdencia Social: "<<previdencia<<endl;
    cout<<"Desconto com vale alimentacao: "<<alimentacao<<endl;
    cout<<"Salario liquido do funcionario: "<<salario_bruto;
}