#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

void imprimirBosque(int original[FILAS][COLUMNAS], int actualizado[FILAS][COLUMNAS]) {
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            cout << original[fila][columna] << " ";
        }
        cout << "\t\t\t";
        for (int columna = 0; columna < COLUMNAS; columna++) {
            cout << actualizado[fila][columna] << " ";
        }
        cout << endl;
    }
}

void expandirFuego(int bosque[FILAS][COLUMNAS], int bosqueModificado[FILAS][COLUMNAS]) {
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            bosqueModificado[fila][columna] = bosque[fila][columna];
        }
    }

    // Reglas de propagación del fuego
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            if (bosque[fila][columna] == 0) { 
                bool vecinoEncendido = false;
                int direcciones[8][2] = {
                    {-1, -1}, {-1, 0}, {-1, 1},
                    {0, -1},          {0, 1},
                    {1, -1}, {1, 0}, {1, 1}
                };
                for (int d = 0; d < 8; d++) {
                    int filaVecino = fila + direcciones[d][0];
                    int columnaVecino = columna + direcciones[d][1];
                    if (filaVecino >= 0 && filaVecino < FILAS &&
                        columnaVecino >= 0 && columnaVecino < COLUMNAS &&
                        bosque[filaVecino][columnaVecino] == 1) {
                        vecinoEncendido = true;
                        break;
                    }
                }
                if (vecinoEncendido) {
                    bosqueModificado[fila][columna] = 1;
                }
            } else if (bosque[fila][columna] == 1) { // Quemándose
                bosqueModificado[fila][columna] = 2; // Quemado
            }
        }
    }
}

void configurarBosque(int bosque[FILAS][COLUMNAS]) {
    srand(time(0));
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            bosque[fila][columna] = rand() % 3; //aleatorio entre 0 y 2
        }
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int bosque[FILAS][COLUMNAS];
    int bosqueModificado[FILAS][COLUMNAS];
    configurarBosque(bosque);
    cout << "Programa que simula la propagación del fuego\n" << endl;
    cout << "Bosque inicial:\t\t\tBosque después de la propagación del fuego:" << endl;
    expandirFuego(bosque, bosqueModificado);
    imprimirBosque(bosque, bosqueModificado);

    return 0;
}
