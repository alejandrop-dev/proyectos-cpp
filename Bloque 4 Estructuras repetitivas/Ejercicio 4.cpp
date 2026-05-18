/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. 
Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/
#include<iostream>
#include<limits>
using namespace std;
int main(){
	
	
	float numeros[6],suma_de_media=0,media=0,alta,baja;
	
	
	cout<<"\tEste programa le va a pedir la temperatura cada 4 horas en el periodo de un dia y le dira la temperatura media, alta y baja que se registro"<<endl;
	
	
	for(int i=0;i<6;i++){
		while(true){
		
		cout<<"Ingrese la temperatura #"<<(i+1)<<": ";
		cin>>numeros[i];
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
	
	
	for(int i=0;i<6;i++){
		suma_de_media+=numeros[i];
	}
	media=suma_de_media/6;
	cout<<"\nLa suma de la media"<<endl;
	cout<<"Media: "<<media<<"C"<<endl;
	
	
	cout<<"\nLa temperatura mas alta"<<endl;
	alta=numeros[0];
	for(int i=1;i<6;i++){
		if(numeros[i]>alta){
			alta=numeros[i];
		
			
		}
	}
	cout<<"Alta: "<<alta<<"C"<<endl;
	
	
	cout<<"\nLa temperatura mas baja"<<endl;
	baja=numeros[0];
	for(int i=1;i<6;i++){
		if(numeros[i]<baja){
			baja=numeros[i];
		
			
		}
	}
	cout<<"Baja: "<<baja<<"C"<<endl;
	

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
