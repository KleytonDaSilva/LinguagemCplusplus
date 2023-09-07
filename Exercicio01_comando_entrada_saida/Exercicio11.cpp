
#include <iostream>
using namespace std;

int main(){
    int farenheit;
    float celsius;
    cout<<" Informe o valor da temperatura em Farenheit: "<<"\n";
    cin>>farenheit;

    celsius=5.0/9.0*(farenheit - 32);

    cout<<"Temperatura em graus Farenheit: "<< farenheit<<"\n";
    cout<<"Temperatura em graus Celsius: "<<celsius;

}