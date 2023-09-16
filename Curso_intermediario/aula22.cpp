//
// Created by nksaddam on 13/09/23.
//


//PONTEIRO PARTE 2
#include <iostream>
using namespace std;

int main() {
    int* vetor = new int[5];
    int i;

    for(int  i =0; i <= sizeof*(vetor); i++){
        cout<<"digite um numero: "<<endl;
        cin>>vetor[i];

    }
    cout<< *(vetor) <<endl;
    delete[] vetor;  // liberar memoria
}