//
// Created by nksaddam on 13/01/24.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float area;
    float ponto;
    float a,b,c,p;


    cout<<"Informe o valor de A: "<<endl;
    cin>>a;

    cout<<"Informe o valor de B: "<<endl;
    cin>>b;

    cout<<"Informe o valor de C: "<<endl;
    cin>>c;

    ponto = (a + b + c)/ 2;
    p = ponto * (ponto - a) * (ponto - b) * ( ponto - c);
    area = sqrt(p);

    cout<<"Valor da Area: "<< area;
}