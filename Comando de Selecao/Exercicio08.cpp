//
// Created by nksaddam on 09/09/23.
//

#include <iostream>
using namespace std;

int main() {
    float a,b,c,raiz;
    cout<<" Informe o valor de A, B e C: "<<"\n";
    cin>>a>>b>>c;

    raiz = b * b - 4 * a * c;
    if(raiz >= 0 ){
        cout<<" Valor da raiz: "<< raiz<<"\n";
    }else{
        cout<<"Nenhuma raiz encontrada!";
    }
}