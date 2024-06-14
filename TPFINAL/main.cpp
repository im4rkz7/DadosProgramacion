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
string nombreJugadorUno;
cout<<"INGRESE EL NOMBRE DE PRIMER JUGADOR: "<<endl;
cin>>nombreJugadorUno;

cout<<"INGRESE EL NOMBRE DEL SEGUNDO JUGADOR: "<<endl;
string nombreJugadorDos;
cin>>nombreJugadorDos;

///AL FINAL DE LA PARTIDA

}
void puntuacionMax()
{
    cout<<"esta es la puntuacion max";
};

int tirarDado();
void generarTirada();
void mostrarTirada();



int main()
{

    int eleccion;

    do
    {

        cout<<"----INGRESE SU OPCION----"<<endl;
        cout<<"MENU PRINCIPAL: "<<endl;
        cout<<"1. JUEGO PARA UN JUGADOR: "<<endl;
        cout<<"2. JUEGO PARA DOS JUGADORES: "<<endl;
        cout<<"3. MOSTRAR PUNTUACION MAS ALTA: "<<endl;
        cout<<"4. SALIR DEL JUEGO: "<<endl;

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
