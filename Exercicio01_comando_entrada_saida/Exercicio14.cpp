//
// Created by nksaddam on 07/09/23.
//
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    float a, b, maiorA, maiorB;

    cout<<"Informe o valor de A e B: "<< "\n";
    cin>>a>>b;

    maiorA = (a + b + abs(a) * (a -b))/2;
    maiorB = (a + b + abs(b) * (a -b))/2;

    cout<<"Valor de A: "<<maiorA<<"\n";
    cout<<"Valor de B: "<<maiorB<<"\n";
}