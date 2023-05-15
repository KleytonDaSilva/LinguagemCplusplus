//
// Created by nksaddam on 15/05/23.
//

#include "Exercicio03.h"
#include <iostream>
using namespace std;

int main() {
    cout<<"---------------------------------------------------\n";
    cout<<"Modelo:____________________________________________\n";
    cout<<"Marca:_____________________________________________\n";
    cout<<"Ano:_______________________________________________\n";
    cout<<"Distânicia percorrida:_____________________________\n";
    cout<<"Litros de combustivel consumidos:__________________\n";
    cout<<"Preço por litro:___________________________________\n";
    cout<<"Total a pagar:_____________________________________\n";
    cout<<"Km por litro:______________________________________\n";

    string modelo;
    cout<<"Informe o modelo: \n";
    cin>>modelo;
    string marca;
    cout<<"Informe a marca: \n";
    cin>>marca;
    int ano;
    cout<<"Informe o ano: \n";
    cin>>ano;
    float distancia;
    cout<<"Informe a distancia: \n";
    cin>>distancia;
    float litro;
    cout<<"Informe o consumo do carro: \n";
    cin>>litro;
    float preco_litro;
    cout<<"Informe proço por litro: \n";
    cin>>preco_litro;
    float total_pagar;
    cout<<"Informe total a pagar: \n";
    cin>>total_pagar;
    float km_litro;
    cout<<"Informe total Km por litro: \n";
    cin>>km_litro;

    cout<<"---------------------------------------------------\n";
    cout<<"Modelo: "<<modelo<<"\n";
    cout<<"Marca: "<<marca<<"\n";
    cout<<"Ano: " <<ano<<"\n";
    cout<<"Distânicia percorrida: "<<distancia<<"\n";
    cout<<"Litros de combustivel consumidos: " <<litro<<"\n";
    cout<<"Preço por litro: "<<preco_litro<<"\n";
    cout<<"Total a pagar: "<<total_pagar<<"\n";
    cout<<"Km por litro: "<<total_pagar<<"\n";

}
