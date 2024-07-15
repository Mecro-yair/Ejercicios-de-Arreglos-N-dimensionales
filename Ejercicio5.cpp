/*
5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor 
mínimo en una matriz de 4x4, indicando sus posiciones.
*/
#include <iostream>

using namespace std;

 int main(){
 	int mayor=0;
	//defino la matriz
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
		
	};
	int menor=matriz[3][3];
	//Mayor y Menor
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(mayor<matriz[i][j]){
				mayor=matriz[i][j];
			}
			if(menor>matriz[i][j]){
				menor=matriz[i][j];
			}
		}
	}
	//mostrar matriz
	cout<<"Matriz:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nEl elemento mayor es "<<mayor<<" y se encuentra en:\n";
	for(int i =0;i<4;i++){
		for(int j=0;j<4;j++){
			if (mayor==matriz[i][j]){
				cout<<"Fila "<<i<<" ,Columna "<<j<<endl;
			}
		}
	}
	cout<<"\nEl elemento menor es "<<menor<<" y se encuentra en:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (menor==matriz[i][j]){
				cout<<"Fila "<<i<<" ,Columna "<<j<<endl;
			}
		}
	}
 	return 0;
 }