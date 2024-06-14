#include "NUESTRASFUNCIONES.h"
#include <iostream>


using namespace std;


void unJugador()
{

    string nombreJugadorUno;
    cout<<"INGRESE EL NOMBRE DEL JUGADOR: ";
    cin.ignore();
    getline(cin,nombreJugadorUno);


///AL FINAL DE LA PARTIDA:
    cout<<nombreJugadorUno<<endl;
    cout<<"PUNTUACION FINAL"<<endl; ///<< aca iria la puntuacion final (funcion)

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

int tirarDado();
void generarTirada();
void mostrarTirada();
