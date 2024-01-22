//
// Created by nksaddam on 09/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int a,b,c, max,med,men, opcao;

    cout<<"Informe o valor de A,B e C: "<<"\n";
    cin>>a>>b>>c;

    if(a > b && a > c){
        if( b > c){
            max = a;
            med = b;
            men = c;
        }else{
            max = c;
            med = a;
            men = b;
        }
    }else{
        if( b > c){
            max = b;
            med = a;
            men = c;
        }else{
            max = c;
            med = a;
            men = b;
        }
    }

    cout<<"Escolha opcao de 1 a  3: "<<"\n";
    cin>>opcao;

    if(opcao == 1){
        cout<<" Ordem crescente: " <<men<<" "<<med<<" "<< max;
    }else{
        if(opcao == 2){
            cout<<" Ordem decrescente: " << max<<" "<<med<<" "<< men;
        }else{
            if(opcao == 3){
                cout<<" Maior valor no medio: "<<med<<" "<<max<<" "<<men;
            }else{
                cout<<"Valor invalido!";
            }
        }
    }
}