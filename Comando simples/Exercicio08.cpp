//
// Created by nksaddam on 14/01/24.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1,x2,y1,y2,p, d;

    cout<<"Informe o valor de X1 e X2: "<<endl;
    cin>>x1>>x2;

    cout<<"Informe o valor de Y1 e Y2: "<<endl;
    cin>>y1>>y2;

    p = (x1 * x1  - y1 * y1) + (x2 * x2 - y2 * y2);
    d = sqrt(p);

    cout<<"Distancia entre dois pontos : "<<d<<endl;
}