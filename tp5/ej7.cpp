#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstring>

using namespace std;

struct empleados{
    int empleado;
    string nombre;
    int antiguedad;
    float salario;
    string estado;
}empleado[5];


void carga_datos( struct empleados empleado[5]);
void menu(struct empleados empleado[5]);
void altas (struct empleados empleado[5]);
void consulta_por_numero_empleado(struct empleados empleado[5]);
void consulta_ordenada_por_nombre(struct empleados empleado[5]);
void consulta_individual(struct empleados empleado[5]);
void calcula_sueldo(struct empleados empleado[5]);
void cambios(struct empleados empleado[5]);

int main(){
    bool continuar;
    continuar=true;
    int opcion;

    carga_datos(empleado);
    while(continuar==true){       //pongo este while para que no se termine el programa luego de seleccionar alguna opcion;
        menu(empleado); 
        if(opcion==6){
            continuar=false;
        }  
    }
   
    return 0;
}
void menu(struct empleados empleado[5]){
    int opcion;
    do{
        cout<< "       Elija opcion     "<<endl<<endl;
        cout<<" 1: Altas/Bajas "<<endl;
        cout<<" 2: Consulta general ordenada por número de empleado"<<endl;
        cout<<" 3: Consulta general ordenada por nombre de empleado"<<endl;
        cout<<" 4: Consulta individual"<<endl;
        cout<<" 5: Cambios"<<endl;
        cout<<" 6: fin"<<endl;
        cin>>opcion;
    }while(opcion>6 || opcion<0);       //validador de opciones
    switch(opcion){
        case 1:
            altas(empleado);
        break;
        case 2:
            consulta_por_numero_empleado(empleado);
            
        break;
        case 3:
            consulta_ordenada_por_nombre(empleado);
        break;
        case 4:
            consulta_individual(empleado);
        break;
        case 5:
            cambios(empleado);
        break;
        case 6:
        break;       

    }//cierra switch

}//cierra menu

void carga_datos(struct empleados empleado[5]){
    
    for(int i=0;i<5;i++){
        cout<<"Ingrese nombre del empleado "<<i+1<<" : ";
        cin>>empleado[i].nombre;
        cout<<"Ingrese la antiguedad del empleado "<<i+1<<" : ";
        cin>>empleado[i].antiguedad;
        cout<<"Ingrese el salario : "<<i+1<<" : ";
        cin>>empleado[i].salario;
        cout<<"______________________________________"<<endl<<endl;
    }

}
void altas (struct empleados empleado[5]){
    for(int i=0;i<5;i++){
        if(empleado[i].estado==""){
            do{
                cout<<"Empleado "<<i+1<<" alta / baja : ";
                cin>>empleado[i].estado;
            }while(empleado[i].estado != "baja" && empleado[i].estado != "alta");       //validar de que escriba alta o baja//
        }
        else if(empleado[i].estado!=""){
            cout<<"Empleado "<<i+1<<" ya esta dado de "<<empleado[i].estado<<endl;
        }
    }
}
void consulta_por_numero_empleado(struct empleados empleado[5]){
    for(int i=0;i<5;i++){
       
        cout<<"Nombre del empleado "<<i+1<<" : "<<empleado[i].nombre<<endl<<endl;
        cout<<"Antiguedad : "<<empleado[i].antiguedad<<" años "<<endl<<endl;
        cout<<"Salario por dia : $ "<<empleado[i].salario<<endl<<endl;
        cout<<"Alta/Baja : "<<empleado[i].estado<<endl<<endl;
        cout<<"___________________________________"<<endl;
    }
    calcula_sueldo(empleado);
    cout<<endl;
}
void consulta_ordenada_por_nombre(struct empleados empleado[5]){
    bool ordenado;
    int i;
    string aux;
    do{
        ordenado=true;
        for(i=0;i<5;i++){
            if((empleado[i].nombre > empleado[i+1].nombre)>0){
                aux=empleado[i+1].nombre;
                empleado[i+1].nombre=empleado[i].nombre;
                empleado[i].nombre=aux;
                ordenado=false;   
            }
        }
    }while(!ordenado);

    for(i=0;i<5;i++){
        cout<<"Nombre del empleado "<<i+1<<" : "<<empleado[i].nombre<<endl<<endl;
        cout<<"Antiguedad : "<<empleado[i].antiguedad<<" años "<<endl<<endl;
        cout<<"Salario por dia : $ "<<empleado[i].salario<<endl<<endl;
        cout<<"Alta/Baja : "<<empleado[i].estado<<endl<<endl;
        cout<<"___________________________________"<<endl;

    }
}
void consulta_individual(struct empleados empleado[5]){
    string nombre_busqueda;
    cout<<"Ingrese un nombre para buscar  los datos ";
    cin>>nombre_busqueda;
    for(int i=0;i<5;i++){
        if(nombre_busqueda==empleado[i].nombre){
            cout<<"Nombre del empleado "<<i+1<<" : "<<empleado[i].nombre<<endl<<endl;
            cout<<"Antiguedad : "<<empleado[i].antiguedad<<" años "<<endl<<endl;
            cout<<"Salario por dia : $ "<<empleado[i].salario<<endl<<endl;
            cout<<"Alta/Baja : "<<empleado[i].estado<<endl<<endl;
        }
    }
}
void calcula_sueldo(struct empleados empleado[5]){
    float sueldo[5];
    int i;
    int horas =160;                                   
    for(i=0;i<5;i++){
        sueldo[i]=(empleado[i].salario * horas);                            
        cout<<"Sueldo del empleado "<<i+1<<" : $ "<<sueldo[i]<<endl;                                              
    }
}
void cambios(struct empleados empleado[5]){
    int opcion;
    string nombre;
  
    cout<<"Escriba el nombre del empleado que quiere cambiar de estado : ";
    cin>>nombre;
    for(int i=0;i<5;i++){
        if(nombre==empleado[i].nombre){
            do{
                fflush(stdin);
                cout<<" Empleado "<<i+1<<endl;
                cout<<"Escriba el nuevo estado (Alta/Baja) : ";
                cin>>empleado[i].estado;
            }while(empleado[i].estado != "baja" && empleado[i].estado != "alta");   //validar de que escriba alta o baja//
        }
    } 
}
    
    
