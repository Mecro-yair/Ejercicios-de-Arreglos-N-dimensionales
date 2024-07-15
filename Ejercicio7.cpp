#include <iostream>
using namespace std;

int main(){
    int matriz[4][4] = {
        {1, 2, 3, 4},   
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7},
    };
    int matrizrotada[4][4];    
	//rotando
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matrizrotada[i][3-j]=matriz[j][i];			
		}
    }
	//mostrar matrices
	cout<<"Matriz:\t\t\tMatriz Rotada:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<4;j++){
			cout<<matrizrotada[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}	