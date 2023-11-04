//
// Created by nksaddam on 04/11/23.
//
#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    int numero;
    int par=0;
    int impar =0;
    while(contador <= 5){

        cout<<"Informe o "<<contador<<" Numero "<<endl;
        cin>>numero;

        if(numero %2 ==0){
            cout<<"Numero e Par"<<endl;
            par++;
        }else{
            cout<<"Numero impar"<<endl;
            impar++;
        }
        contador++;
    }
    cout<<"Quantidade de numeros par: "<<par<<endl;
    cout<<"Quantidade de numeros impar: "<<impar<<endl;
}