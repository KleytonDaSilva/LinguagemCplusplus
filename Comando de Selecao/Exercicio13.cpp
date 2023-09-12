//
// Created by nksaddam on 12/09/23.
//
#include <iostream>
using namespace std;

int main() {
    float empresa;

    cout<<"Informe a poluicao da empresa: ";
    cin>>empresa;

    if (empresa > 0.30 && empresa < 0.40){
        cout<<"Suspender as operacoes!";
    }else{
        if (empresa >= 0.40 && empresa < 0.50){
            cout<<"Notificacao: ";
        }else{
            cout<<"Suspender as atividade imediatamente";
        }
    }
}