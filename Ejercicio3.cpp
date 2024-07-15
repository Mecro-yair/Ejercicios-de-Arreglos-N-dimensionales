/*
Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una 
matriz de 4x4 y muestre el resultado.
*/

#include <iostream>
using namespace std;

int main(){
	int sumadiagonal=0;
	//defino la matriz
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
		
		};
	
	
	//defino la matrizsumadiagonales
	int matrizsumadiagonales[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				sumadiagonal=sumadiagonal+matriz[i][j];
			}else if(i+j==3){ //en una matriz la diagonal secundaria sus elementos suman el orden-1 ,me di cuenta en el proceso xD.
				sumadiagonal=sumadiagonal+matriz[i][j];
			}
		}
	}
	//mostrando matriz
	cout<<"Matriz:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLa suma de diagonales es: "<<sumadiagonal;
	return 0;
}