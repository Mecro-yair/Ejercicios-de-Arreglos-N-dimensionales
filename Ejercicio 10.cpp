#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

void inicializarTablero(int tablero[FILAS][COLUMNAS]) {
    srand(time(0));
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            tablero[i][j] = rand() % 2;  // Valores aleatorios 0 o 1
        }
    }
}

int contarMinasAdyacentes(int tablero[FILAS][COLUMNAS], int fila, int columna) {
    int contador = 0;
    for (int i = max(0, fila - 1); i <= min(FILAS - 1, fila + 1); ++i) {
        for (int j = max(0, columna - 1); j <= min(COLUMNAS - 1, columna + 1); ++j) {
            if (tablero[i][j] == 1 && !(i == fila && j == columna)) {
                ++contador;
            }
        }
    }
    return contador;
}
void mostrarTablero(int tablero[FILAS][COLUMNAS]) {
    cout << "Tablero inicio:\t\tTablero con numero de minas adyacentes:\n" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << tablero[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < COLUMNAS; ++j) {
            int minasAdyacentes = contarMinasAdyacentes(tablero, i, j);
            cout << minasAdyacentes << " ";
        }
        cout << endl;
    }
}

int main() {
    int tablero[FILAS][COLUMNAS];
    inicializarTablero(tablero);
    cout << "Generador de tablero buscaminas:\n" << endl;
    mostrarTablero(tablero);

    return 0;
}

