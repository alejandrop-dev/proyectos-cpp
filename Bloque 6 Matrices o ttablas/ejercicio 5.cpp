/* Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/
#include<iostream>
#include<limits>
#include<vector>
using namespace std; 
int main (){
	
	cout<<"Este programa creara una matriz 3x3 y convertira las filas en columnas y  viceversa\n";
	
	int columnas=3;
	int filas=3;
	
	vector<vector<int>>matriz(filas, vector<int>(columnas));
	vector<vector<int>>matriz_traspuesta(filas, vector<int>(columnas));
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	        while(true){
	            cout<<"\nIngrese un numero para ["<<(i+1)<<"]["<<(j+1)<<"]: ";
	            cin>>matriz[i][j];
	            if(cin.fail()){
	                cout<<"El dato ingresado es invalido\n";
	                cin.clear();
	                cin.ignore(numeric_limits<streamsize>::max(),'\n');
	            }
	            else{
	                break;
	            }
	        }
	    }
	}
	
	//Mostrar matriz original sin modificaciones 
	
	cout<<"\nMuestra de la Matriz original\n";
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz[i][j]<<"   ";
	    }
	    cout<<"\n";
	}
	
	//Proceso de cambio de valores 
	cout<<"\nMuestra de la matriz traspuesta\n";
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	      matriz_traspuesta[i][j]=matriz[j][i];
	    }
	}
	
	//Mostrar matriz trapuesta 
	
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz_traspuesta[i][j]<<"   ";
	    }
	    cout<<"\n";
	}
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
