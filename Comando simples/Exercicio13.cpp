//
// Created by nksaddam on 16/01/24.
//
#include <iostream>
using namespace std;

int main(){
    float m1,m2,m3,r12,r23,r13, g,e;

    cout<<"Informe os valores de m1,m2,m3: "<<endl;
    cin>>m1>>m2>>m3;

    cout<<"Informe os valores de r12, r13, r23: "<<endl;
    cin>>r12>>r13>>r23;

    cout<<"Informe o valor de G: "<<endl;
    cin>>g;

    e =g * ((m1 * m2) + (m1 * m3) + ( m2 * m3) / (r12 + r13 + r23) );

    cout<<"Valor de E: "<<e;
}