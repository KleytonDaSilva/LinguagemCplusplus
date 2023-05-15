
#include "Exercicio01.h"
#include <iostream>
using namespace std;

int main() {
    float franco;
    float dolarAme;
    float libra;
    float coroa;
    float marco;

    cout << "------------------------------------------------------\n";
    cout << "100 francos franceses       | 21.55 dólares canadenses\n";
    cout << "1 dólar americano           | 01.06 dólares canadenses\n";
    cout << "100 marcos Alemães          | 43.20 dólares canadenses\n";
    cout << "1 libra Inglesa             |  1.84 dólares canadenses\n";
    cout << "100 coroas suecas           | 24.25 dólares canadenses\n";
    cout << "100 dracmas gregas          |  2.95 dólares canadenses\n";
    cout << "------------------------------------------------------\n";

cout <<"Informe a quantidados de Francos para converter em dólar Canadense:\n";
cin>> franco;
franco = franco * 0.2155;
cout<<" Quantidade de Franco Frances/Dólar canadense: " << franco<<"\n";

cout <<"Informe a quantidade de dólar americanos para converter em coroas suecas: \n";
cin>> coroa;
coroa = coroa * 0.2431;
cout<<" Quantidade de Dolar americano/Coroa sueca: " << coroa<<"\n";

cout<<"Informe a quantidade de Dracmas gragos para converter em libra Inglesa: \n";
cin>>libra;
libra = libra * 1.595;
cout<<" Quantidade de Dracmas gregos/libra Inglesa: " << libra<<"\n";

cout<<"Informe a quantidade de Dólar Canadense para converter em Dólar americano: \n";
cin>>dolarAme;
cout<<"Informe a quantidade de Dólar Canadense para converter em Marco Alemão: \n";
cin >> marco;
dolarAme = dolarAme * 1.06;
marco = marco * 0.432;
cout<<" Quantidade de Dólar Canadense/ Dólar Americano: " << dolarAme<<"\n";
cout<<" Quantidade de Dólar Canadense/Marco Alemão: " << marco<<"\n";


}