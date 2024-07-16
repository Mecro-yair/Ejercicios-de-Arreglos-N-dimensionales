#include <iostream>

using namespace std;

int main(){
	int matriz[5][5]={
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
		};
	cout<<"Matriz:\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<5;i++){
			cout<<matriz[0][i]<<" ";
	}
	for(int i=1;i<5;i++){
			cout<<matriz[i][4]<<" ";
	}
	for(int i=3;i>=0;i--){
			cout<<matriz[4][i]<<" ";
	}
	for(int i=3;i>0;i--){
			cout<<matriz[i][0]<<" ";
	}
	for(int i=1;i<4;i++){
			cout<<matriz[1][i]<<" ";
	}
	for(int i=2;i<4;i++){
			cout<<matriz[i][3]<<" ";
	}
	for(int i=2;i>0;i--){
			cout<<matriz[3][i]<<" ";
	}
	for(int i=1;i<3;i++){
			cout<<matriz[2][i]<<" ";
	}
		cout<<"\n";
	return 0;
}