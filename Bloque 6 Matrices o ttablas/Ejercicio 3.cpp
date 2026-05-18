// Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	
	cout<<"Este programa le pedira numeros enteros y los multiplicara por dos y se le mostrara"<<endl;
	
	int filas;
	while(true){
		cout<<"\nIngrese el numero de filas: ";
		cin>>filas;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(filas<=0){
			cout<<"El numero ingresado no puede ser menor o igual a 0"<<endl;
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
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(columnas<=0){
			cout<<"El numero ingresado no puede ser menor o igual a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	vector<vector<int>>matriz(filas,vector<int>(columnas));
	vector<vector<int>>matriz_copia(filas,vector<int>(columnas));
	cout<<"\nIngreso de los valores\n"<<endl;
	
	for(int i=0;i<filas;i++){
	    for(int j=0;j<columnas;j++){
	        while(true){
	            cout<<"Ingrese un numero para ["<<(i+1)<<"]["<<(j+1)<<"]: ";
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
	
	cout<<"\nVision de la matriz\n"<<endl;
	
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz[i][j]<<"*2"<<"  ";
	        matriz_copia[i][j]=(matriz[i][j]*2);
	    }
	    cout<<"\n";
	}
	
	cout<<"\nResultado de la matriz multiplicado por dos\n"<<endl;
	
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
