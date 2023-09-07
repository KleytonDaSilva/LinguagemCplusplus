//
// Created by nksaddam on 07/09/23.
//
#include <iostream>
using namespace std;

int main(){
    float a,b,c,d,e,f,x,y;
    cout<<"Informa os valores das letras A,B,C,D,E e F:"<<"\n";
    cin>>a>>b>>c>>d>>e>>f;

    x = (c*e - b*f) / (a*e - b*d);
    y = (a*f - c*d) / (a*e - b*d);

    cout<<"Valor de X: "<<x<<"\n";
    cout<<"Valor de Y: "<<y<<"\n";
}