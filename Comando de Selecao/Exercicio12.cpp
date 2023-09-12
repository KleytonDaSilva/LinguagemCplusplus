//
// Created by nksaddam on 12/09/23.
//
#include <iostream>
using namespace std;

int main() {
    int matricula;
    float nota1, nota2, nota3, aproveitamento;
    cout<<"Informe as notas1, 2 e 3 : "<<"\n";
    cin>>nota1>>nota2>>nota3;

    aproveitamento = (nota1 * 5 + nota2 * 2 + nota3 * 3) / 10;

    if (aproveitamento >= 9.0){
        cout<<"Matricula do aluno: "<<matricula<<"\n";
        cout<<"primeira nota: "<<nota1<<"\n";
        cout<<"segunda nota: "<<nota2<<"\n";
        cout<<"terceira nota: "<<nota3<<"\n";
        cout<<"Media de aproveitamento: "<<aproveitamento<<"\n";
        cout<<"Conceito A "<<"\n";
        cout<<"Aprovado "<<"\n";
    }else{
        if (aproveitamento >= 7.5 && aproveitamento < 9.0){
            cout<<"Matricula do aluno: "<<matricula<<"\n";
            cout<<"primeira nota: "<<nota1<<"\n";
            cout<<"segunda nota: "<<nota2<<"\n";
            cout<<"terceira nota: "<<nota3<<"\n";
            cout<<"Media de aproveitamento: "<<aproveitamento<<"\n";
            cout<<"Conceito B "<<"\n";
            cout<<"Aprovado "<<"\n";
        }else{
            if (aproveitamento >= 6.0 && aproveitamento < 7.5){
                cout<<"Matricula do aluno: "<<matricula<<"\n";
                cout<<"primeira nota: "<<nota1<<"\n";
                cout<<"segunda nota: "<<nota2<<"\n";
                cout<<"terceira nota: "<<nota3<<"\n";
                cout<<"Media de aproveitamento: "<<aproveitamento<<"\n";
                cout<<"Conceito C "<<"\n";
                cout<<"Aprovado "<<"\n";
            }else{
                if (aproveitamento >= 4.0 && aproveitamento <6.0){
                    cout<<"Matricula do aluno: "<<matricula<<"\n";
                    cout<<"primeira nota: "<<nota1<<"\n";
                    cout<<"segunda nota: "<<nota2<<"\n";
                    cout<<"terceira nota: "<<nota3<<"\n";
                    cout<<"Media de aproveitamento: "<<aproveitamento<<"\n";
                    cout<<"Conceito D "<<"\n";
                    cout<<"Reprovado "<<"\n";
                }else{
                    cout<<"Matricula do aluno: "<<matricula<<"\n";
                    cout<<"primeira nota: "<<nota1<<"\n";
                    cout<<"segunda nota: "<<nota2<<"\n";
                    cout<<"terceira nota: "<<nota3<<"\n";
                    cout<<"Media de aproveitamento: "<<aproveitamento<<"\n";
                    cout<<"Conceito E "<<"\n";
                    cout<<"Reprovado "<<"\n";
                }
            }
        }
    }
}