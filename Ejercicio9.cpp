#include <iostream>
using namespace std;

int main() {
    int ordenCuadrado;
    cout << "Digite el orden del cuadrado latino: ";  cin >> ordenCuadrado;

    int matriz[ordenCuadrado][ordenCuadrado];

    for(int i=0;i<ordenCuadrado;++i) {
        matriz[0][i] = i + 1;
    }

    for(int i=1; i<ordenCuadrado;++i) {
        for(int j=0;j<ordenCuadrado;++j) {
            int indice_anterior=j-1;
            if (indice_anterior < 0) {
                indice_anterior = ordenCuadrado - 1;
            }
            matriz[i][j] = matriz[i-1][indice_anterior];
        }
    }

    for (int i=0;i<ordenCuadrado;++i) {
        for (int j = 0; j < ordenCuadrado; ++j) {
            cout <<matriz[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}
