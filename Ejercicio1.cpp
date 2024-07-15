#include <iostream>

using namespace std;

int main(){
	int matriz1[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int matriz2[3][3]={
		{9,8,7},
		{6,5,4},
		{3,2,1}
	};	
	int matrizmulti[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matrizmulti[i][j]=0;
		}
	}
	//aplicando multiplicacion 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				matrizmulti[i][j]=matrizmulti[i][j]+matriz1[i][k]*matriz2[k][j];
			}
		}
	}
	//mostrando matrices.
	cout<<"Matriz 1:\tMatriz 2:\tMatriz multiplicada:\n";
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\t\t";
		
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\t\t";
		
		for(int j=0;j<3;j++){
			cout<<matrizmulti[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}