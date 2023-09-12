//
// Created by nksaddam on 12/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int inicio, fim, total;

    cout<<"Informe o inicio do Jogo: "<<"\n";
    cin>>inicio;

    cout<<"Informe o fim do jogo: "<<"\n";
    cin>>fim;

    if(fim < inicio){
        total = (24 - inicio) + fim;
    }else{
        if( fim > inicio){
            total = fim - inicio;
        }else{
            if(fim == inicio){
                total = 24;
            }
        }
    }
    cout<<"O total de horas jogadas, foram: "<<total;
}