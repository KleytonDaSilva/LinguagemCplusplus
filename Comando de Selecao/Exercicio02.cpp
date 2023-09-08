//
// Created by nksaddam on 08/09/23.
//

#include <iostream>
using namespace std;

int main() {
    int a,b,c, max;

    cout<<"Informe os valores de A, B e C: "<<"\n";
    cin>>a>>b>>c;

    if(a > b){
        if( a > c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if( b > c){
            max = b;
        }else{
            max = c;
        }
    }

    cout<<"Maior Numero de A, B e C : "<< max <<"\n";

}