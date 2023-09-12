//
// Created by nksaddam on 12/09/23.
//

#include <iostream>
using namespace std;

int main() {
    string nome;
    float hora;
    int faltas;

    cout<<"Informe o nome do funcionario: "<<"\n";
    cin>>nome;

    cout<<"Informe as horas extras: "<<"\n";
    cin>>hora;

    cout<<"Informe numero de faltas: "<<"\n";
    cin>>faltas;

    hora = hora - 2/3 * faltas;

    if(hora > 40){
        cout<<"Gratificao de 1000, 00";
    }else {
        if (hora < 30 && hora <= 40) {
            cout << "Gratificao de 800, 00";
        } else {
            if (hora < 20 && hora <= 30) {
                cout << "Gratificao de 600,00";
            } else {
                if (hora < 10 && hora <= 20) {
                    cout << "Gratificao de 400, 00";
                }else{
                    cout<<"Gratificacao de 200,00";
                }
            }
        }
    }
}