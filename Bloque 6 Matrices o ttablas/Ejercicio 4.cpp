/*Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, 
copiar el contenido a otra matriz y por ultimo mostrarla en pantalla.*/
#include<iostream>
#include<limits>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	
	cout<<"Este programa generara los numeros de una matriz de forma aleatoria"<<endl;
	
	srand (time(0));
	
	int filas;
	while(true){
		cout<<"\nIngrese el numero de filas: ";
		cin>>filas;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(filas<=0){
			cout<<"El numero de las filas no puede ser menor o igual a 0\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	int columnas;
	while(true){
		cout<<"\nIngrese el numero de columnas: ";
		cin>>columnas;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(columnas<=0){
			cout<<"El numero de colunas no puedes ser menor o igual a 0\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	vector<vector<int>>matriz(filas,vector<int>(columnas));
	vector<vector<int>>matriz_copia(filas,vector<int>(columnas));
	
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	        matriz[i][j]= 1+ rand() % 100;
	    }
	}
	
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	        matriz_copia[i][j]=matriz[i][j];
	    }
	}
	
	cout<<"\nResultado de la matriz con los numeros aleatorios\n";
	
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz_copia[i][j]<<"   ";
	    }
	    cout<<"\n";
	}
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
