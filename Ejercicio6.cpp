#include <iostream>
using namespace std;

int main(){
    int matriz[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3},
        {4, 5, 6, 7, 8, 9},
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3},
        {4, 5, 6, 7, 8, 9}
    };
    int matrizreflejada[6][6];
    
	//reflejando
	for (int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			matrizreflejada[i][j]=matriz[i][5-j];			
		}
	}
	//mostrar matrices
	cout<<"Matriz:\t\t\tMatriz Reflejada:\n";
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<6;j++){
			cout<<matrizreflejada[i][j]<<" ";
		}
		cout<<"\n";
	}
		

	return 0;
}	