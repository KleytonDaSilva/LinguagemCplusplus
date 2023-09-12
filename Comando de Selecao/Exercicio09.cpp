//
// Created by nksaddam on 12/09/23.
//
#include <iostream>
using namespace std;

int main() {
    string funcionario;
    float salario, novo_salario;

    cout<<"Informe o nome do funcionario: "<<"\n";
    cin>>funcionario;
    cout<<"Informe o salario do funcionario: "<<" \n";
    cin>>salario;

    if(salario <= 400.0){
        novo_salario = salario * 0.15 + salario;
    }else{
        if(salario > 400.0 && salario <= 700.0){
            novo_salario = salario * 0.12 + salario;
        }else{
            if(salario > 700.0 && salario <= 1000.0){
                novo_salario = salario * 0.10 + salario;
            }else{
                if(salario > 1000.0 && salario <= 1500.0){
                    novo_salario = salario * 0.07 + salario;
                }else{
                    if(salario > 1500.0 && salario <= 2000.0){
                        novo_salario = salario * 0.04 + salario;
                    }else{
                        cout<<"Sem aumento no salario!";
                    }
                }
            }
        }
    }
    cout<<"Aumento no salario: "<<novo_salario<<"\n";
    cout<<"Funcionario: "<<funcionario;
}