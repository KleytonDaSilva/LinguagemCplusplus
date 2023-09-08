//
// Created by nksaddam on 08/09/23.
//

#include <iostream>
using namespace std;

int main() {
    int a,b,c,max;

    cout<<"Informe os valores de A, B e c:"<<"\n";
    cin>>a>>b>>c;

    if (a > b && a > c){
        max = a;
    }else{
        if(b > a && b > c){
            max = b;
        }else{
            if(c > a && c> b){
                max =c;
            }
        }
    }
    cout<<"Maior : "<<max<<"\n";
}