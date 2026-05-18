/*2. Escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicar el IVA */
#include<iostream>
using namespace std;
int main(){
	/*
  el producto pera 
	
	*/
	double price_product=0,price_total=0,process=0;
	char name_product[20];
	cout<<"\tEste programa le va a agregar el IVA a el valor de un producto que usted ingrese"<<endl;
	cout<<"\nIngrese el nombre del producto: ";   cin>>name_product;
	cout<<"Ingrese el precio del producto: ";   cin>>price_product;
	
	process=price_product*0.12;   //el valor de 0.12 es el IVA 
	price_total=price_product+process;
	
	cout<<"\nDetalles:"<<endl;
	cout<<"\nProducto: "<<name_product<<endl;
	cout<<"Precio: "<<price_product<<endl;
	cout<<"Precio + IVA: "<<price_total<<endl;
	
	
	return 0;
}
