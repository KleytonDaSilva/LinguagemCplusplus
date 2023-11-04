//
// Created by nksaddam on 04/11/23.
//
#include <iostream>
using namespace std;

int main() {
    int numero = 45;
    bool contador = false;

    while(contador == false){
        numero = numero +1;
        cout<<"Numero: "<<numero<<endl;
        if(numero == 100){
            contador = true;
        }
    }
}