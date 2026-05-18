//Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.
#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main (){
	
	cout<<"Este programa va a rellenar una matriz segun el numero de filas y columnas que ingrese"<<endl;
	
	int filas,columnas;
	
	while(true){
	cout<<"\nIngrese el numero de filas: ";
	cin>>filas;
    	if(cin.fail()){
    		cout<<"El dato ingresado es invalido "<<endl;
    		cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(filas<=0){
			cout<<"El numer ingresado no puede ser menor o igual a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
		
	}

	while(true){
	cout<<"\nIngrese el numero de columnas: ";
	cin>>columnas;
	    if(cin.fail()){
	    	cout<<"El dato ingresadoe es invalido "<<endl;
	    	cin.clear();
	    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(columnas<=0){
			cout<<"El numero de las columnas no puede ser menor o igual a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	vector<vector<int>>matriz(filas,vector<int>(columnas));
	
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	        cout<<"Ingrese el valor para ["<<(i+1)<<"]["<<(j+1)<<"]: ";
	        cin>>matriz[i][j];
	    }
	}
	
	cout<<"\nResultado de la matriz\n"<<endl;
	
	
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz[i][j]<<"  ";
	    }
	    cout<<'\n'<<endl;
	}

	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
