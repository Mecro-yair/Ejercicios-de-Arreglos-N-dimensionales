#include <iostream>
using namespace std;

int main(){
	int valor;
	int matriz[3][3]={
		{1,2,3},
		{4,2,6},
		{7,2,9}
		};
	//mostrar matriz
	cout<<"Matriz:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}cout<<"\n";
	}
	cout<<"Valor a buscar: "; cin>>valor; cout<<"\n";
	
	cout<<"Matriz:\t\tEl valor "<<valor<<" se encuentra en:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			if (valor==matriz[i][j]){
				cout<<"Fila "<<i<<" ,Columna "<<j;
			}
		}
		cout<<"\n";
	}
	return 0;
}