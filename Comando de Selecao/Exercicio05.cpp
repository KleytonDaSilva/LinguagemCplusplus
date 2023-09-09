//
// Created by nksaddam on 09/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int numero, n1,n2,n3;

    cout<<"Informe um numero de 1 a 3: "<<"\n";
    cin>>numero;

    if(numero == 1 ){
        cout<<"Informe o valor de n1: "<<"\n";
        cin>>n1;
    }else{
        if(numero == 2){
            cout<<"Informe o valor de n2: "<<"\n";
            cin>>n2;
        }else {
            if (numero == 3) {
                cout << "Informe o valor de n3: " << "\n";
                cin >> n2;
            } else {
                cout << "Valor invalido!";


            }
        }
    }

}