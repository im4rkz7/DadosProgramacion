///  CASO PARTICULAR CUANDO PEDIMOS NOMBRE

/// NOSOTROS VAMOS A TENER QUE CARGAR EL NOMBRE, CARGAMOS NOMBRE CON STRIN Y CIN
/// EL ESPACIO REPRESENTA EL INGRESO DE DATOS, POR EJ SI INGRESAMOS BRIAN LARA,
/// BRIAN PARA PRIMER INGRESO Y LARA PARA EL SEGUNDO PEDIDO.
/// COMO HACER QUE EL ESPACIO NO LO CAMBIE DE CIN
/// CAMBIAMOS USO DEL CIN.....
/// UTILIZAREMOS LA FUNCION GETLINE, INCLUYE UNA LINEA COMPLETA, DESDE EL PRINCIPIO AL ENTER
/// getline(cin, nombre)   lo que hacemos fue usar el flujo cin, y guardar el string
/// en la variable nombre.
/// antes del getline, si tenemos un cin, debemos utilizar un cin.ignore();
/// system cls para recargar el menu
/// SYSTEM("pause") para ver menu


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

struct DiceRoll {
    vector<int> diceValues;
    int score;
    string combination;
};

void rollDice(DiceRoll &roll) {
    roll.diceValues.clear();
    for(int i = 0; i < 6; ++i) {
        roll.diceValues.push_back(rand() % 6 + 1);
    }
}

void calculateScore(DiceRoll &roll) {
    int sum = 0;
    int sixCount = 0;
    int straightCount = 0;

    // Verificar si hay un sexteto de 6
    for(int i = 0; i < 6; ++i) {
        if(roll.diceValues[i] == 6) {
            sixCount++;
        }
    }
    if(sixCount == 6) {
        roll.score = 0;
        roll.combination = "Sexteto de 6. Puntaje reseteado.";
        return;
    }

    // Calcular la suma de los dados y verificar escalera
    for(int i = 0; i < 6; ++i) {
        sum += roll.diceValues[i];
        if(roll.diceValues[i] == i+1) {
            straightCount++;
        }
    }

    if(straightCount == 6) {
        roll.score = 1000; // Escalera
        roll.combination = "Escalera";
        return;
    }

    // Verificar si hay un sexteto
    if(sixCount > 0) {
        roll.score = sixCount * 10;
        roll.combination = "Sexteto de " + to_string(6);
        return;
    }

    roll.score = sum;
    roll.combination = "Suma de dados";
}

void startSinglePlayerGame() {
    cout << "Juego para un jugador" << endl;
    cout << "Ingrese su nombre: ";
    string playerName;
    cin >> playerName;

    srand(time(0));
    int totalScore = 0;
    int roundNumber = 1;

    while(totalScore < 100) {
        cout << "TURNO DE " << playerName << " | RONDA N° " << roundNumber << " | PUNTAJE TOTAL: " << totalScore << " PUNTOS" << endl;
        cout << "------------------------------------------------------------------" << endl;

        DiceRoll roll;
        rollDice(roll);
        calculateScore(roll);

        cout << "Combinación: " << roll.combination << " | Puntaje obtenido: " << roll.score << " puntos" << endl;

        if(roll.score == 0) {
            totalScore = 0;
            cout << "¡Sexteto de 6! El puntaje total se ha reseteado a 0." << endl;
        } else if(roll.score == 1000) {
            cout << "¡Escalera! ¡Has ganado la partida en esta ronda!" << endl;
            totalScore = 100;
            break;
        } else {
            totalScore += roll.score;
        }

        cout << "------------------------------------------------------------------" << endl;
        cout << "PRESIONAR ENTER PARA CONTINUAR..." << endl;
        cin.ignore();
        cin.get();

        roundNumber++;
    }

    cout << "Felicidades, " << playerName << ", has ganado la partida con un total de " << roundNumber << " rondas." << endl;
}

void startTwoPlayerGame() {
    cout << "Juego para dos jugadores" << endl;
}

void displayHighScore() {
    cout << "Mostrar puntuación más alta" << endl;
}

int main() {
    int choice;

    do {
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Juego nuevo para un jugador" << endl;
        cout << "2. Juego nuevo para dos jugadores" << endl;
        cout << "3. Mostrar puntuación más alta" << endl;
        cout << "4. Salir del juego" << endl;
        cout << "Ingrese su opción: ";
        cin >> choice;

        switch(choice) {
            case 1:
                startSinglePlayerGame();
                break;
            case 2:
                startTwoPlayerGame();
                break;
            case 3:
                displayHighScore();
                break;
            case 4:
                cout << "Gracias por jugar. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, ingrese un número válido." << endl;
        }
    } while(choice != 4);

    return 0;
}
