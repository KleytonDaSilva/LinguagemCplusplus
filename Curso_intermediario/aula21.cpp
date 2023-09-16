//
// Created by nksaddam on 13/09/23.
//

// PONTEIROS
#include <iostream>
using namespace std;


// uma funcao que recebe o valor inteiro n
void foo(int* n){ // * ponteiro
*n = 20; // indica o valor q receber o ponteiro
}

int main() {
    int var = 10; //inicializado variavel com valor 10
    int* pvar;    // inicializado ponteiro como int, ponteiro do mesmo tipo da variavel acima

    pvar = &var; // inicializa o ponteiro & indica a onde est'a chamando o valor
    foo(pvar); // chamando o valor da funcao pelo ponteiro, pode ser feito = foo (&var); passagem por referencia, passo o endereco da variavel
    cout<<*pvar<<endl;
}