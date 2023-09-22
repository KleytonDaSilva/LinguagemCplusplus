#include <iostream>
using namespace std;

int main() {
    int alimento, bebida, sobremesa;
    float comida, tomar, posComida, total;

    cout<<"----------------------------------------------------------"<<endl;
    cout<<" Codigo     |          Descricao              |  Preco R$)"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<" 1          |Hamburguer                       | 14,50    )"<<endl;
    cout<<" 2          |Chessburguer                     | 15,50    )"<<endl;
    cout<<" 3          |Cachorro Quente                  | 10,00    )"<<endl;
    cout<<" 4          |Sanduiche Natural                | 13,50    )"<<endl;
    cout<<" 5          |Refrigerante                     |  5,00    )"<<endl;
    cout<<" 6          |Suco de Laranja                  |  6,00    )"<<endl;
    cout<<" 7          |Milk shake                       | 10,50    )"<<endl;
    cout<<" 8          |Sundae                           | 13,00    )"<<endl;
    cout<<" 9          |Casquinha                        | 10,00    )"<<endl;
    cout<<"----------------------------------------------------------"<<endl;


    cout<<"Escolha um alimento , 1 - 4: "<<endl;
    cin>> alimento;

    if( alimento == 1){
        comida = 14.5;
        cout<<"Hamburguer : 14,50"<<endl;
    }else {
        if (alimento == 2) {
            comida = 15.5;
            cout << "Chessburguer : 15.50";
        }else {
            if (alimento == 3) {
                comida = 10.0;
                cout << "Cachorro Quente : 10.00";
            }else{
                if (alimento == 4) {
                    comida = 13.5;
                    cout << "Chessburguer : 13.50";
                }else{
                    cout<<"Codigo invalido!"<<endl;
                }
            }
        }
    }

    cout<<"Escolha uma bebida, 5 e 6: "<<endl;
    cin>> bebida;

    if(bebida == 5){
        tomar = 5.0;
        cout << "Refrigerante : 5.00";
    }else{
        if(bebida == 6){
            tomar = 6.0;
            cout <<"Suco de laranja : 6.00";
        }else{
            cout<<"Codigo invalido!"<<endl;
        }
    }

    cout<<"Escolha uma sobremesa, 7 a 9: "<<endl;
    cin>> sobremesa;

    if(sobremesa == 7){
        posComida = 10.5;
        cout << "Milk Shake : 10.50";
    }else{
        if(sobremesa == 8){
            posComida = 13.0;
            cout <<"Sundae : 13,00";
        }else{
            if(sobremesa == 9) {
                posComida = 10.0;
                cout << "Casquinha : 10.00";
            }else{
                cout<<"Codigo invalido!"<<endl;
            }

        }
    }
    total = comida + tomar +posComida;

cout<<"Total da compra: "<<total<<endl;
}
