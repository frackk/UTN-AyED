#include <iostream>
using namespace std;

template <typename T>          // creo "T"

void ComparaEtc (T a, T b, T c, int cmpTT(T, T)) {     // puede recibir una funcion, como int cmpTT, donde obtiene 2 valores tipo T

    if (cmpTT(a,b)) {
        "asd";
    }

}


int main () {

    int a = 10;
    int b = 20;
    int c = 30;
    
    ComparaEtc <int> (a,b,c);   // con el "<int>" llamo a T como entero

    return 0;
}