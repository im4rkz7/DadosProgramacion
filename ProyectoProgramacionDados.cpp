
#include <iostream>

using namespace std;

void unJugador(){cout<<"1 jugador";}
void dosJugadores(){cout<<"2 jugador";};
void puntuacionMax(){cout<<"esta es la puntuacion max";};

int tirarDado();
void generarTirada();
void mostrarTirada();


int main()
{

   int eleccion;

   do{

    cout<<"----INGRESE SU OPCION----"<<endl;
    cout<<"MENU PRINCIPAL: "<<endl;
    cout<<"1. JUEGO PARA UN JUGADOR: "<<endl;
    cout<<"2. JUEGO PARA DOS JUGADORES: "<<endl;
    cout<<"3. MOSTRAR PUNTUACION MAS ALTA: "<<endl;
    cout<<"4. SALIR DEL JUEGO: "<<endl;

    cin>>eleccion;

    switch(eleccion){
    case 1: unJugador();
        break;
    case 2: dosJugadores();
        break;
    case 3: puntuacionMax();
        break;
    case 4: cout <<"GRACIAS POR JUGAR";
        break;
    default:
        cout<<"OPCION INVALIDA - INGRESE OTRO NUMERO: ";

    }


    }
    while(eleccion!=4);

    return 0;
}


