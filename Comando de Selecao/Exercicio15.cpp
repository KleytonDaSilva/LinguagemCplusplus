//
// Created by nksaddam on 16/09/23.
//
#include <iostream>t

using namespace std;

int main() {
        string escolha;
        float base, altura, lado,total;


        cout<<"escolha as seguintes opcoes"<<endl;
        cout<<"T para area do triangulo "<<endl;
        cout<<"Q para area do quadrado "<<endl;
        cout<<"R para area do retangulo "<<endl;

        cin>>escolha;


   if(escolha == "t"){
       cout<<"Voce escolheu a Opcao T, area de um triangulo:"<<endl;
       cout<<"Informe a Base:"<<endl;
       cin>>base;
       cout<<"Informe a Altura: "<<endl;
       cin>>altura;
       total = (base * altura)/ 2;
       cout<<"Area do triagulo : "<<total<<endl;


   }else{
       if(escolha == "q"){
           cout<<"Voce escolheu a Opcao Q, area de um quadrado:"<<endl;
           cout<<"Informe o lado:"<<endl;
           cin>>lado;
           total = lado * lado;
           cout<<"Area do quadrado : "<<total<<endl;
       }else{
           if( escolha == "r"){
               cout<<"Voce escolheu a Opcao R, area de um retangulo:"<<endl;
               cout<<"Informe a Base:"<<endl;
               cin>>base;
               cout<<"Informe a Altura: "<<endl;
               cin>>altura;
               total = base * altura;
               cout<<"Area do retangulo : "<<total<<endl;
           }else{
               cout<<"Opcoes invalidas!!!";
           }
       }
   }


}