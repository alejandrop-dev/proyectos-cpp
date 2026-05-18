// 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	
	cout<<"\tThis program will read the final grade of 4 students and calculate the average final grade of the 4 "<<endl;
	
	float note1,note2,note3,note4,media=0;
	cout<<"\nEnter the grade of the first student:";   cin>>note1;
	cout<<"Enter the second student's grade:";   cin>>note2;
	cout<<"Enter the grade of the third student:";   cin>>note3;
	cout<<"Enter the grade of the fourth student:";   cin>>note4;
	
	media=(note1+note2+note3+note4)/4;
	
	cout<<"\nThe average of the 4 students is:"<<media<<endl;
	
	system("pause");
	return 0;
}
