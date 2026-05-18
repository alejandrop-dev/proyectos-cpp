/*Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, 
situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. 
Muestre el contenido del nuevo vector en la salida estándar.*/
#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main (){
	
	vector<char>vector1={'H','o','l','a',' '};
	vector<char>vector2={'M','u','n','d','o'};
	
	int tamano1=vector1.size();
	int tamano2=vector2.size();
	int tamano_final= tamano1 + tamano2;
	
	vector<char>new_vector(tamano_final);
	
	for(int i=0;i<tamano1;i++){
	    new_vector[i]=vector1[i];
	}
	
	for(int i=tamano1,j=0;i<tamano_final;i++,j++){
	    new_vector[i]=vector2[j];
	}
	
	
	
	for(int i=0;i<tamano_final;i++){
    cout<<new_vector[i];
	}

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
}
