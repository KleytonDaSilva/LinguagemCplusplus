//
// Created by nksaddam on 07/09/23.
//
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float m1,m2,m3,e;
    float r1,r2,r3;

    cout<<"Informe os valores da massa em gramas: "<<"\n";
    cin>>m1>>m2>>m3;
    cout<<"Informe os valores da distancia em metros: "<<"\n";
    cin>>r1>>r2>>r3;

    e = 6.67 * (m1 * m2 + m1 * m2 + m2 + m3)/ (r1 + r2 + r3);

    cout<<"Energia de coesao: "<< e <<"\n";
}