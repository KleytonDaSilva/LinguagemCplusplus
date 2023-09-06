//
// Created by nksaddam on 06/09/23.
//
#include <iostream>
using namespace std;

int main() {
    float salario_bruto;
    int previdencia, alimentacao;

    cout<<"Informe o salario bruto do funcionario: "<<"\n";
    cin>>salario_bruto;

    previdencia = salario_bruto * 0.1;

    alimentacao = salario_bruto * 0.3;

    salario_bruto =  salario_bruto - previdencia - alimentacao;

    cout<<"Desconto da Previdencia Social: "<<previdencia<<"\n";
    cout<<"Desconto com vale alimentacao: "<<alimentacao<<"\n";
    cout<<"Salario liquido do Funcionario:  "<<salario_bruto<<"\n";
}