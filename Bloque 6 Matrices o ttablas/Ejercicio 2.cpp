//Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	
	int matriz[3][3];
	
	cout<<"\tEste programa le mostrara la diagonal principal de una matriz 3x3 de los valores que ingrese"<<endl;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			while(true){
				cout<<"\nIngrese el valor de ["<<(i+1)<<"]["<<(j+1)<<"]: ";
		    	cin>>matriz[i][j];
		    	if(cin.fail()){
		    		cout<<"El dato ingresado es invalido"<<endl;
		    		cin.clear();
		    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
				}
				else{
					break;
				}
			}
			
		}
	}
	
	cout<<"\nResultado de la matriz 3x3\n"<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"\t";
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<'\n';
	}
	
	cout<<"\nResultado de la matriz con la diagonal principal\n"<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"\t";
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<matriz[i][j];
			}
			else{
				cout<<"  ";
			}
		}
		cout<<'\n';
	}
	
	
	
	
	
	return 0;
}
