#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int q = 4;
    int termo = a;

    while(termo <= 200){
        termo = termo * q;
        cout<<"Termo : "<<termo<<endl;
    }
}

