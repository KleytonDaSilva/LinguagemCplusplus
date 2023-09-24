//
// Created by nksaddam on 22/09/23.
//
#include <iostream>
using namespace std;

int main() {


    cout<<"Categoria  |   % de aumento sobre salario atual"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"A,C,F,H    |              10                   "<<endl;
    cout<<"B,D,E,G    |              15                   "<<endl;
    cout<<"I,K ate R  |              20                   "<<endl;
    cout<<"J,S ate Z  |              25                   "<<endl;
    cout<<"-----------------------------------------------"<<endl;

    string nome, categoria;
    float salario;

    cout<<"Informe o nome do Funcionario: "<<endl;
    cin>>nome;
    cout<<"Informe o salario do funcionario: "<<endl;
    cin>>salario;
    cout<<"Informe a categoria do funcionario: "<<endl;
    cin>>categoria;

    if(categoria == "a" || categoria == "c" || categoria == "f" ||categoria == "h"){
        salario = salario * 0.10 + salario;
        cout<<"Funcionario : "<<nome<<endl;
        cout<<"Salario atual: "<<salario<<endl;
        cout<<"Categoria: "<< categoria<<endl;
    }else{
        if(categoria == "b" || categoria == "d" || categoria == "e" ||categoria == "g"){
            salario = salario * 0.15 + salario;
            cout<<"Funcionario : "<<nome<<endl;
            cout<<"Salario atual: "<<salario<<endl;
            cout<<"Categoria: "<< categoria<<endl;
        }else{
            if(categoria == "i" || categoria == "k" || categoria == "m" ||categoria == "r"){
                salario = salario * 0.20 + salario;
                cout<<"Funcionario : "<<nome<<endl;
                cout<<"Salario atual: "<<salario<<endl;
                cout<<"Categoria: "<< categoria<<endl;
            }else{
                if(categoria == "j" || categoria == "s" || categoria == "v" ||categoria == "z"){
                    salario = salario * 0.25 + salario;
                    cout<<"Funcionario : "<<nome<<endl;
                    cout<<"Salario atual: "<<salario<<endl;
                    cout<<"Categoria: "<< categoria<<endl;
                }else{
                    cout<<"Codigo invalido!!";
                }
            }
        }
    }
}