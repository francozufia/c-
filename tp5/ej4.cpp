#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct datos_alumnos{
    long legajo;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    long telefono;
}datos[2];

void carga_datos(int n ,struct datos_alumnos datos[2]);
void busqueda_alumno(string apellido ,int n,struct datos_alumnos datos[2]);

int main(){
    int n;
    string apellido;
    cout<<"ingrese cantidad alumnos :"<<endl;
    cin>>n;
    carga_datos(n,datos);
    cout<<"Ingrese el apellido del alumno que desea ver su informacion :"<<endl;
    cin>>apellido; 
    busqueda_alumno(apellido,n,datos);       
    
    return 0;
}

void carga_datos(int n,struct datos_alumnos datos[2]){
    int i;
    for(i=0 ;i<n;i++){
        fflush(stdin);
        cout<<"Ingrese legajo : "<<endl;
        cin>>datos[i].legajo;
        cout<<"Ingrese el nombre : "<<endl;
        cin>>datos[i].nombre;
        cout<<"Ingrese apellido : "<<endl;
        cin>>datos[i].apellido;
        cout<<"Ingrese edad : "<<endl;
        cin>>datos[i].edad;
        cout<<"Ingrese la profesion : "<<endl;
        cin>>datos[i].profesion;
        cout<<"Ingrese lugar nacimiento : "<<endl;
        cin>>datos[i].lugar_nacimiento;
        cout<<"Ingrese telefono : "<<endl;
        cin>>datos[i].telefono;
        cout<<"Ingrese su direccion : "<<endl;            //ingresar la direccion sin espacios
        cin>>datos[i].direccion;
        cout<<"_______________________"<<endl<<endl;
    }

}

void busqueda_alumno(string apellido ,int n,struct datos_alumnos datos[2]){
    for(int i=0;i<n;i++){                           
         if(datos[i].apellido==apellido){
            cout<<"Legajo :"<<" "<<datos[i].legajo<<endl;
            cout<<"Nombre :"<<" "<<datos[i].nombre<<endl;
            cout<<"Edad :"<<" "<<datos[i].edad<<endl;
            cout<<"Profesion :"<<" "<<datos[i].profesion<<endl;
            cout<<"Lugar nacimineto :"<<" "<<datos[i].lugar_nacimiento<<endl;
            cout<<"Telefono :"<<" "<<datos[i].telefono<<endl;
            cout<<"Direccion :"<<" "<<datos[i].direccion<<endl;
        }
    }

}