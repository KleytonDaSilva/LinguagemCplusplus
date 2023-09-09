//
// Created by nksaddam on 09/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout<<"Informe o valor de A e B: "<<"\n";
    cin>>a>>b;

    if(a % b == 0 || b % a == 0){
        cout<<"SAO MULTIPLOS!";
    }else{
        cout<<"NAO SAO MULTIPLOS!";
    }

}