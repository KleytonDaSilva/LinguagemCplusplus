//
// Created by nksaddam on 04/09/23.
//

#include "Exercicio08.h"
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x1;
    float x2;
    float y1;
    float y2;

    cout<<" Informe o ponto x1: \n";
    cin>>x1;
    cout<<" Informe o ponto x2: \n";
    cin>>x2;
    cout<<" Informe o ponto y1: \n";
    cin>>y1;
    cout<<" Informe o ponto y2: \n";
    cin>>y2;

    float total;
    total =  (x2 * x2 - x1 * x1) + (y2 * y2 - y1 * y1);
    float raiz;
    raiz = sqrt(total);

    cout<<"Distancia: "<< raiz<<"\n";




}