#include <iostream>
#include "NUESTRASFUNCIONES.h"

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
    cin.ignore();
    getline(cin,nombreJugadorDos2);

    cout<< nombreJugadorDos2 <<endl;

///AL FINAL DE LA PARTIDA

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



int main()
{

    int eleccion;

    do
    {
cout<<"------------------------------------------------------"<<endl;
        cout<<"----INGRESE SU OPCION----"<<endl;
        cout<<"MENU PRINCIPAL: "<<endl;
        cout<<"1. JUEGO PARA UN JUGADOR: "<<endl;
        cout<<"2. JUEGO PARA DOS JUGADORES: "<<endl;
        cout<<"3. MOSTRAR PUNTUACION MAS ALTA: "<<endl;
        cout<<"4. SALIR DEL JUEGO: "<<endl;
cout<<"------------------------------------------------------"<<endl;
        cin>>eleccion;

        switch(eleccion)
        {
        case 1:
            unJugador();
            break;
        case 2:
            dosJugadores();
            break;
        case 3:
            puntuacionMax();
            break;
        case 4:
            cout <<"GRACIAS POR JUGAR";
            break;
        default:
            cout<<"OPCION INVALIDA - INGRESE OTRO NUMERO: ";

        }


    }
    while(eleccion!=4);

    return 0;
}
