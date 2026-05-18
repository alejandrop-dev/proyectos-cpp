/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un 30% del total,
 la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar
  las tres notas de un alumno y escriba en la salida estándar su nota final.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	cout<<"\tThis program will tell you your average knowing the following:"<<endl;	
	cout<<"Practices 30%"<<endl;
	cout<<"Theoretical note 60%"<<endl;
	cout<<"participation 10%"<<endl;
	
	double practice_note,theoretical_note,participation_note,result;
	cout<<"Enter the practice note:";   cin>>practice_note;
	cout<<"Entter the theoretical note:";   cin>>theoretical_note;
	cout<<"Enter the participation grade:";   cin>>participation_note;
	
	practice_note*=0.30;
	theoretical_note*=0.60;
	participation_note*=0.10;
	result=practice_note+theoretical_note+participation_note;
	
	cout<<"Your final grade is:"<<result<<endl;
	
	
	system("pause");
	return 0;
}
