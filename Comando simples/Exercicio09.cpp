//
// Created by nksaddam on 14/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, p1, p2, p3, media, pesos, media_geral;
    string nome;
    cout<<"Informe o nome do aluno: "<<endl;
    cin>>nome;

    cout<<"Informe as notas1, nota2 e nota3 "<<endl;
    cin>>nota1>>nota2>>nota3;

    cout<<"Informe o peso1, peso2 e peso3 : "<<endl;
    cin>>p1>>p2>>p3;

    media = (p1 * nota1) + (p2 * nota2) + (p3 + nota3);
    pesos = p1 + p2 + p3;
    media_geral = media / pesos;

    cout<<"Aluno: "<<nome<<endl;
    cout<<" Media : "<<media_geral;
}
