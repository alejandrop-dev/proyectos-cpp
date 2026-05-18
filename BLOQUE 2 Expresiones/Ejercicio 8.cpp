/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo 
y escriba en la salida estándar su hipotenusa.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//Titulo que dice lo que va a realizar el programa
	cout<<"\tThis program will find the hypotenuse of a right triangle based on its legs."<<endl;
	//Variables
	double cate1,cate2,sum_cuadrados=0,result_hipo;
	//Entrada de datos
	cout<<"Enter the value of the first cateto:";
	cin>>cate1;
	cout<<"Enter the value of second cateto:";
	cin>>cate2;
	//Operacion
	sum_cuadrados= (cate1 * cate1)+(cate2 * cate2);
	result_hipo = sqrt(sum_cuadrados );
	//Salida de datos
	cout<<"the hypotenuse is:"<<result_hipo<<endl;
	//Nueva funcion para cerrar programa :)
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
