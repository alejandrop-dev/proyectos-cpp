/*Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/
#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main (){
	
	cout<<"Este programa va a determinar si una matriz es simetrica o no\n";
	
	//Ingreso del valor de las filas
	int filas;
	while(true){
		cout<<"\nIngrese el numero de filas para la matriz: ";
		cin>>filas;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(filas<=0){
			cout<<"El numero ingresado no puede ser menor o igual a 0\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	//Ingreso del valor de las columnas
	int columnas;
	while(true){
		cout<<"\nIngrese el numero de las columnas: ";
		cin>>columnas;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(columnas<=0){
			cout<<"El numero ingresado no puede ser menor o igual a 0\n",
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}	
	
	int contador=(filas*columnas);
	int total=0;
	//Ingreso de los datos
	
	vector<vector<int>>matriz(filas, vector<int>(columnas));
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			while(true){
				cout<<"\nIngrese los valores para ["<<(i+1)<<"]["<<(j+1)<<"]: ";
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
	
	cout<<"\nMatriz ingresada\n"<<endl;
	
	for(int i=0;i<filas;i++){
	    cout<<"\t";
	    for(int j=0;j<columnas;j++){
	        cout<<matriz[i][j]<<"   ";
	    }
	    cout<<"\n";
	}
	
	
	
	if(columnas==1 && filas==1){
	    cout<<"\nLa matriz  es simetrica\n";
	    
	}
	
	else if(columnas==filas){
	    vector<vector<int>>matriz_transpuesta(filas, vector<int>(columnas));
	    
	    for(int i=0;i<filas;i++){
	        for(int j=0;j<columnas;j++){
	            matriz_transpuesta[i][j]=matriz[j][i];
	            if(matriz_transpuesta[i][j]!=matriz[i][j]){
	                cout<<"\nLa matriz no es simetrica\n";
	                cout<<"\nPress enter to exit...";
	                cin.ignore();
	                cin.get();
	                return 0;
	            }
	            else{
	                total=(total+1);
	            }
	        }
	    }
	    
	    if(contador==total){
	    cout<<"\nLa matriz es simetrica\n";
	    }
	}
	
	
	
	else{
	    cout<<"\nLa matriz no es simetrica\n ";
	}
	



	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}

