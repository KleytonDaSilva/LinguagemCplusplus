//
// Created by nksaddam on 09/09/23.
//

#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cout<<"Informe os valor de X,Y e Z"<<"\n";
    cin>>x>>y>>z;
    if(x != y && y != z){
        cout<<"Triangulo Escaleno!";
    }else{
        if(x == y && x == z && y == z){
            cout<<"Triangulo equilatero!";
        }else{
            cout<<"Triangulo isoceles!";
        }
    }
}
