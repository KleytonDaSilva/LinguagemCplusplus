//
// Created by nksaddam on 16/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float a,b,c,d,e,f,x,y;

    cout<<"Informe os valores de a, b, c, d, e, f: "<<endl;
    cin>>a>>b>>c>>d>>e>>f;


    x = (c * e) - (b * f) / (a * e) - (b * d);
    y = (a * f) - (c * d) / (a * e) - (b * d);

    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;

}