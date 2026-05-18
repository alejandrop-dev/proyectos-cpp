//Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main (){
    
    cout<<"Este programa va a calcular la suma de dos matrices de 3x3\n";
    
    int filas=3;
    int columnas=3;
    
    //Primera matriz 
    vector<vector<int>>matriz_1(filas, vector<int>(columnas));
    cout<<"\nIngrese los valores de la primera matriz\n";
    for(int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            while(true){
                cout<<"\nIngrese el valor de ["<<(i+1)<<"]["<<(j+1)<<"]: ";
                cin>>matriz_1[i][j];
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
    
    //Segunada matriz
    vector<vector<int>>matriz_2(filas, vector<int>(columnas));
    cout<<"\nIngrese los valores de la segunda matriz\n";
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            while(true){
                cout<<"\nIngrese el valor de ["<<(i+1)<<"]["<<(j+1)<<"]: ";
                cin>>matriz_2[i][j];
                if(cin.fail()){
                    cout<<"El fato ingresado es invalido\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                }
                else{
                    break;
                }
            }
        }
    }
    
    //Muestra de la primera matriz
    cout<<"\nMuestra visual de la primera matriz:\n";
    for(int i=0;i<filas;i++){
        cout<<"\t";
        for(int j=0;j<columnas;j++){
            cout<<matriz_1[i][j]<<"   ";
        }
        cout<<"\n";
    }
    
    //Muestra de la segunda matriz
    cout<<"\nMuestra visual de la segunda matriz:\n";
    for(int i=0;i<filas;i++){
        cout<<"\t";
        for(int j=0;j<columnas;j++){
            cout<<matriz_2[i][j]<<"   ";
        }
        cout<<"\n";
    }
    
    //Procedimiento de la suma de las matrices
    vector<vector<int>>matriz_resultado(filas, vector<int>(columnas));
    cout<<"\nProcedimiento de la suma de las matrices:\n";
    for(int i=0;i<filas;i++){
        cout<<"\t";
        for(int j=0;j<columnas;j++){
            cout<<matriz_1[i][j]<<"+"<<matriz_2[i][j]<<"   ";
            matriz_resultado[i][j]=matriz_1[i][j]+matriz_2[i][j];
        }
        cout<<"\n";
    }
    
    //Mostrar resultado
    cout<<"\nResultado:\n";
    for(int i=0;i<filas;i++){
        cout<<"\t";
        for(int j=0;j<columnas;j++){
            cout<<matriz_resultado[i][j]<<"   ";
        }
        cout<<"\n";
    }
    
    
    
    
    
    cout<<"\nPress enter to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}
