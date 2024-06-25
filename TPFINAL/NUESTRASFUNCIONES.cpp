#include "NUESTRASFUNCIONES.h"
#include <iostream>


using namespace std;


void unJugador()
{

    int vec[6];
    string nombreJugadorUno;
    cout<<"INGRESE EL NOMBRE DEL JUGADOR: ";
    cin.ignore();
    getline(cin,nombreJugadorUno);

    cout<<"SU PRIMERA TIRADA ES: "  << endl;
    generarTirada(vec);
    mostrarTirada(vec);


    ///muestra la tirada sumada (meterlo en un else como ultima combinacion posible)
    cout<< ""<< endl;

    cout << sumaTirada(vec)<< endl;




///AL FINAL DE LA PARTIDA:

    cout<< nombreJugadorUno <<endl;
    cout<< "PUNTUACION FINAL" <<endl; ///<< aca iria la puntuacion final (funcion)
}



void dosJugadores()
{
    string nombreJugadorUno2;
    cout<<"INGRESE EL NOMBRE DE PRIMER JUGADOR: "<<endl;
    cin.ignore();
    getline(cin,nombreJugadorUno2);


    cout<<nombreJugadorUno2<<endl;

    string nombreJugadorDos2;
    cout<<"INGRESE EL NOMBRE DEL SEGUNDO JUGADOR: "<<endl;
    getline(cin,nombreJugadorDos2);

    cout<< nombreJugadorDos2 <<endl;

///AL FINAL DE LA PARTIDA DEBERA MOSTRAR EL NOMBRE DEL JUG QUE HAYA GANADO Y EL PUNT OBTENIDO


}
void puntuacionMax()
{
    cout<<"----------------------------"<<endl;
    cout<<"esta es la puntuacion max "<< endl;
    cout<<"----------------------------"<<endl;
};

int tirarDado(){

return rand() % 6 + 1;

}


void generarTirada(int v[6])
{
    for (int i= 0; i < 6; i++)
    {
        v[i] = tirarDado();
    }
}

void mostrarTirada(int v[6]){

for (int i= 0; i < 6; i++)

    cout << v[i] << " ";
}
///esto suma la tirada (ponerlo como un else a la primera combinacion)
int sumaTirada(int v[6]){
int contador=0;

for (int i= 0; i < 6; i++){

contador+= v[i];

}
return contador;


}
/// escalera (verlo)
void buscaRepetido(int v[6]){
int contador=0;

for (int i= 0; i < 6; i++){
        if  (v[6] != i ){
            contador++;
        }


}
}



