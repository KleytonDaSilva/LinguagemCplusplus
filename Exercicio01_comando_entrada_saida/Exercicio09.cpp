//
// Created by nksaddam on 04/09/23.
//

#include "Exercicio09.h"
#include <iostream>
using namespace std;

int main(){
    string aluno;
    float n1,n2,n3, media_geral;
    float p1,p2,p3,media, peso;
    cout<<"Informe nome do aluno: "<<"\n";
    cin>>aluno;
    cout<<"Informe a primeira nota: "<<"\n";
    cin>>n1;
    cout<<"Informe a segunda nota: "<<"\n";
    cin>>n2;
    cout<<"Informe a terceira nota: "<<"\n";
    cin>>n3;

    cout<<"Informe a peso da  primeira nota: "<<"\n";
    cin>>p1;
    cout<<"Informe a peso da segunda nota: "<<"\n";
    cin>>p2;
    cout<<"Informe a peso da terceira nota: "<<"\n";
    cin>>p3;

    media = ((p1 * n1) + (p2 * n2) + (p3 * n3));
    peso = p1 + p2 + p3;
    media_geral = media / peso;

    cout<<"Aluno : "<< aluno<<"\n";
    cout<<"Media Geral : "<<media_geral<<"\n";
}
