/*
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen. 
*/
#include<iostream>
#include<limits>
#include <string>
using namespace std;
int main (){
	int i,nota1[3],nota_aprobacion=7,respuesta_a=0,respuesta_b=0,respuesta_c=0;
	
	string nombre[5];
	
	cout<<"\tEn una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:"<<endl;
	cout<<"a) Alumnos que aprobaron todos los examenes."<<endl;
	cout<<"b) Alumnos que aprobaron al menos un examen."<<endl;
	cout<<"c) Alumnos que aprobaron unicamente el ultimo examen."<<endl;
	cout<<"\nPresiona enter para empezar el programa ";
	
	for(int i=0;i<5;i++){
	
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"\nIngrese el nombre del Estudiante #"<<(i+1)<<": ";
	getline(cin,nombre[i]);
	                
					                                
		for(int j=0;j<3;j++){
		
			while(true){
			cout<<"Ingrese la nota del examen "<<(j+1)<<": ";	
			cin>>nota1[j];
				if(cin.fail()){
					cout<<"\nEl dato ingresado es invalido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				}
				
				else if(nota1[j] < 0){
					cout<<"\nNo puede ingresar notas menoes a 0"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				}
				
				else if(nota1[j]>10){
					cout<<"\nNo puede ingresar notas mayores a 10"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				}
				
				else{
					break;
				}
			}
			
	        
		}
		
		//Alumnos que aprobaron todos los exámenes.
    	if(nota1[0]>=nota_aprobacion && nota1[1]>=nota_aprobacion && nota1[2]>=nota_aprobacion ){
	    	respuesta_a+=1;   
	    }
	    
	    //Alumnos que aprobaron al menos un examen.
	    if(nota1[0]>=nota_aprobacion || nota1[1]>=nota_aprobacion || nota1[2]>=nota_aprobacion ){
	    	respuesta_b+=1;   
	    }
	    
	    //Alumnos que aprobaron únicamente el último examen.
	    if(nota1[0]<nota_aprobacion && nota1[1]<nota_aprobacion && nota1[2]>=nota_aprobacion ){
	    	respuesta_c+=1;   
	    }
    }
    
    cout<<'\n'<<"\tResultado de los alumnos"<<endl;
    cout<<"\nAlumnos que aprobaron todos los examenes"<<endl;
    cout<<"Respuesta:"<<respuesta_a<<endl;
    cout<<"\nAlumnos que aprobaron al menos un examen"<<endl;
    cout<<"Respuesta:"<<respuesta_b<<endl;
    cout<<"\nAlumnos que aprobaron unicamente el ultimo examen"<<endl;
    cout<<"Respuesta:"<<respuesta_c<<endl;


	cout<<"\n";
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
