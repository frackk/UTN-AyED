// Tipos de datos definidos por el programador

#include <iostream>
using namespace std;

// ------- STRUCT -------

struct Fecha {

    int dia;
    int mes;
    int anio;

};

// funcion de inicializacion
Fecha fecha(int d, int m, int a) {

    Fecha x;
    x.dia = d;
    x.mes = m;
    x.anio = a;
    return x;

}

main () {

    Fecha f;
    f.dia = 1;
    f.mes = 7;
    f.anio = 2002;

    // Fecha f1 = fecha{2,10,1970};
    // Fecha f2 = fecha{3,14,1975};

    cout << f.dia << f.mes << f.anio << endl;


    



    // ------- TIPO DE DATO ABTRACTO (TAD) -------
    // datos + funciones



    // ------- SOBRECARGA DE FUNCIONES -------
    // no entendi
    // int asd;
    // void asd (int i) {

        

    // };
}