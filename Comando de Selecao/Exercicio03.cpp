//
// Created by nksaddam on 08/09/23.
//

#include <iostream>
using namespace std;

int main() {
    float a,b,c,max,media1,media2, ponderada;

    cout<<"Informe os valores de A,B e C:"<<"\n";
    cin>>a>>b>>c;

    if(a > b){
        if(a > c){
            max = a;
            media2 = b;
            media1 = c;
        }else{
            max = c;
            media1 = a;
            media2 = b;
        }
    }else{
        if(b > c){
            max = b;
            media1 = a;
            media2 = c;
        }else{
            max = c;
            media1 = b;
            media2 = a;
        }
    }

    ponderada = ( max * 5 + media1 * 2.5 + media2 * 2.5) /10;

    cout<<"Maior Nota: "<<max<<"\n";
    cout<<"Media ponderada: "<<ponderada<<"\n";


}