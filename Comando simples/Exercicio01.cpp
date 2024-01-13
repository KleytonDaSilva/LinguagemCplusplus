//
// Created by nksaddam on 13/01/24.
//
#include <iostream>
using namespace std;

int main() {
    float area;
    float raio;
    float comprimento;
    cout<<"Informe o valor do raio: "<<endl;
    cin>>raio;

    area = 3.1415 * (raio * raio);
    comprimento = 2 * 3.1415 * raio;

    cout<<" Valor da Area : "<< area <<endl;
    cout<<"Valor do comprimento: " <<comprimento<<endl;



}