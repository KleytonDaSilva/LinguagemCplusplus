//
// Created by nksaddam on 22/09/23.
//
#include <iostream>
using namespace std;

int main() {

    int codigo;
    float quantidade_item, total;



    cout<<"Codigo | ---------------------------------| Preco unitario: "<<endl;
    cout<<"100    | ---------------------------------| 13,00  "<<endl;
    cout<<"101    | ---------------------------------| 12,50  "<<endl;
    cout<<"102    | ---------------------------------| 12,00  "<<endl;
    cout<<"103    | ---------------------------------| 12,25  "<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    cout<<"Informe a quantidade de lanche: "<<endl;
    cin>>quantidade_item;
    cout<<"Informe o codigo do lanche: "<<endl;
    cin>>codigo;

    if(quantidade_item == 5 && codigo == 100){
        total = 13 * 4;
        cout<<"Promocao! compre 5 e pague 4!"<<endl;
        cout<<"Total :"<<total<<endl;
    }else{
        if(quantidade_item == 5 && codigo ==101){
            total = 12.5 * 4;
            cout<<"Promocao! compre 5 e pague 4!"<<endl;
            cout<<"Total :"<<total<<endl;
        }else{
            if(quantidade_item == 5 && codigo == 102){
                total = 12 * 4;
                cout<<"Promocao! compre 5 e pague 4!"<<endl;
                cout<<"Total :"<<total<<endl;
            }else{
                if(quantidade_item == 5 && codigo == 103){
                    total = 12.25 * 4;
                    cout<<"Promocao! compre 5 e pague 4!"<<endl;
                    cout<<"Total :"<<total<<endl;
                }else{
                    cout<<"Promocao invalida!!";
                }
            }
        }
    }
}