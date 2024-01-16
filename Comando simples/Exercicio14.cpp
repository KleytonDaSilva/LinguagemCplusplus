//
// Created by nksaddam on 16/01/24.
//
#include <iostream>
using namespace std;

int main(){
    float a,b, maior_a, maior_b;

    cout<<"Informe o valores de A e B: "<<endl;
    cin>>a>>b;

    maior_a = (a + b + abs(a) * ( a - b)) / 2;
    maior_b = (a + b + abs(b) * ( a - b)) / 2;

    cout<<"Valor de A: "<<maior_a<<endl;
    cout<<"Valor de B: "<<maior_b<<endl;
}