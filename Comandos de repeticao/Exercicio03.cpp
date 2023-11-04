//
// Created by nksaddam on 04/11/23.
//
#include <iostream>
using namespace std;

int main() {
     int numero = 0;
     int numero2 = 1;
     int total = 0;
     while(total <= 100){

          total = numero + numero2;
          cout<<"Numero: "<<numero << " + "<<numero2<< " = " << total <<endl;
          numero++;
          numero2++;
     }
}