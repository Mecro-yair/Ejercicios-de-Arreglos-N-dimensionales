#include <iostream>

using namespace std;
int main(){
	int var1;
	int opcion;
	int var2;
	int aux;

	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
cout<<"Matriz Inicial:\n";
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		cout<<matriz[i][j]<<" ";
	}
	cout<<"\n";
}
cout<<"\nFilas a intercambiar: \n"; cin>>var1; cin>>var2;
for(int i=0;i<4;i++){
	aux= matriz[var1][i];
	matriz[var1][i]=matriz[var2][i];
	matriz[var2][i]=aux;
}
cout<<"\nMatriz Cambiada:\n";
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		cout<<matriz[i][j]<<" ";
	}
	cout<<"\n";
}
	return 0;
}