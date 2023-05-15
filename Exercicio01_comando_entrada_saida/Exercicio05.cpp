//
// Created by nksaddam on 15/05/23.
//

#include "Exercicio05.h"
#include <iostream>
using namespace std;
int main(){
    string nome;
    cout<<"Informe o nome do Aluno: \n";
    cin>>nome;
    float matematica;
    float portugues;
    float conhecimento;
    cout<<"Informe a nota de matematica: \n";
    cin>> matematica;
    cout<<"Informe a nota de português: \n";
    cin>>portugues;
    cout<<"Informe a nota de conhecimentos gerais: \n";
    cin>>conhecimento;

    float media;
    media = (matematica + portugues + conhecimento) / 3;

    cout<<"Aluno: "<<nome<<"\n";
    cout<<"Nota de Matemática: "<<matematica<<"\n";
    cout<<"Nota de Português: "<<portugues<<"\n";
    cout<<"Nota de conhecimento gerais: "<<conhecimento<<"\n";
    cout<<"Média do Aluno: "<<media<<"\n";


}