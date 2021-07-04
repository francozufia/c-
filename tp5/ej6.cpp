#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstring>
using namespace std;

struct datos{                               //preferi usar string para que no halla confusiones al ingresar un dato equivocado//
    string apellido;
    string fecha;
    string calle;
    string estado;
    string telefono;
    string altura;
    string listar_estado;

}dato_amigo[3];

void carga(struct datos dato_amigo[3]);
void consulta_general_ordenada(struct datos dato_amigo[3]);
void consulta_individual(struct datos dato_amigo[3]);
void estado(struct datos dato_amigo[3]);
void actualizar(struct datos dato_amigo[3]);
int main(){
    bool sigue;
    sigue=true;     //para que se repita el menu y las opciones//
    char opcion;    
    system ("clear");  //para ir limpiando la pantalla
    while(sigue==true){
        
        cout<<"  DIRECTORIO DE AMIGOS "<<endl;
        cout<<"¿ Que desea realizar ? "<<endl;
        cout<<"a: Carga "<<endl;
        cout<<"b: Actualizar"<<endl;
        cout<<"c: Consultas"<<endl;
        cout<<"d: Salir"<<endl;
        cin>>opcion;

        system ("clear");

        switch(opcion){
            case 'a':
                carga(dato_amigo);
        break;
            case 'b':
            actualizar(dato_amigo);
        break;
        case 'c':
            int opcion;
            cout<<"        Elija opcion "<<endl;
            cout<<"1 : Consulta general ordenada por nombre"<<endl;
            cout<<"2 : Consulta individual"<<endl;
            cout<<"3 : Estado (activo / baja)"<<endl;
            cout<<"4 : Salir"<<endl; 
            cin>>opcion;

            if(opcion==1){
                consulta_general_ordenada(dato_amigo);
            }
            if(opcion==2){
                consulta_individual(dato_amigo);
            }
            if(opcion==3){
                estado(dato_amigo);
            }
            if(opcion==4){
                break;
            }  
        break;

        case 'd':
            cout<<"salir"<<endl;
        break;       
    }
    
    }
    return 0;
}
void carga(struct datos dato_amigo[3]){

    for(int i=0;i<3;i++){
        if(dato_amigo[i].apellido == ""){
            fflush(stdin);
            cout<<i+1<<" º amigo : "<<endl;
            cout<<"ingrese apellido : ";
            cin>>dato_amigo[i].apellido;
            cout<<"ingrese fecha de cumpleaños : ";
            cin>>dato_amigo[i].fecha;
            cout<<"ingrese su estado : ";
            cin>>dato_amigo[i].estado;
            cout<<"ingrese su telefono : ";
            cin>>dato_amigo[i].telefono; 
            cout<<"ingrese nombre de la  calle : ";
            cin>>dato_amigo[i].calle;
            cout<<"ingrese la altura : ";
            cin>>dato_amigo[i].altura;
        }
        else if (dato_amigo[i].apellido != ""){
            cout<<"Ya hay informacion en el amigo "<<i+1<<endl;
        }

    }
}

void consulta_general_ordenada(struct datos dato_amigo[3]){
    string aux;
    bool ordenado;
    int i;
    do{
        ordenado=true;
        for(i=0;i<3;i++){
            if(dato_amigo[i].listar_estado=="baja"){
                if((dato_amigo[i].apellido>dato_amigo[i+1].apellido)>0){
                    aux=dato_amigo[i+1].apellido;
                    dato_amigo[i+1].apellido=dato_amigo[i].apellido;
                    dato_amigo[i].apellido=aux;
                    ordenado=false;
                }
            }
           if(dato_amigo[i].listar_estado=="alta"){
                dato_amigo[i].apellido="";
                dato_amigo[i].fecha="";
                dato_amigo[i].estado="";
                dato_amigo[i].telefono="";
                dato_amigo[i].calle="";
                dato_amigo[i].altura="";
            }

            
        }

    }while(!ordenado);

    for(i=0;i<3;i++){
        cout<<"Apellido : "<<dato_amigo[i].apellido<<endl;
        cout<<"Cumpleaños : "<<dato_amigo[i].fecha<<endl;
        cout<<"Estado : "<<dato_amigo[i].estado<<endl;
        cout<<"Telefono : "<<dato_amigo[i].telefono<<endl;
        cout<<"Nombre de la calle : "<<dato_amigo[i].calle<<endl;
        cout<<"Eltura : "<<dato_amigo[i].altura<<endl;
        cout<<"Alta/Baja : "<<dato_amigo[i].listar_estado<<endl;
        cout<<"_________________________________"<<endl;
        
    }
}
void consulta_individual(struct datos dato_amigo[3]){
    int i;
    string apellido_busqueda;
    cout<<"Ingrese el apellido para buscar la informacion : ";
    cin>>apellido_busqueda;
    
        for(i=0;i<3;i++){
            if(apellido_busqueda==dato_amigo[i].apellido){
                
                cout<<"Apellido : "<<dato_amigo[i].apellido<<endl;
                cout<<"Cumpleaños : "<<dato_amigo[i].fecha<<endl;
                cout<<"Estado : "<<dato_amigo[i].estado<<endl;
                cout<<"Telefono : "<<dato_amigo[i].telefono<<endl;
                cout<<"Nombre de la calle : "<<dato_amigo[i].calle<<endl;
                cout<<"Altura : "<<dato_amigo[i].altura<<endl;
                cout<<"Alta/Baja : "<<dato_amigo[i].listar_estado<<endl;    
            }
        }
    
}
void estado(struct datos dato_amigo[3]){
    int i;
    for ( i = 0; i < 3; i++){
        do{
            cout<<" Alta/Baja "<<i+1<<" : ";
            cin>>dato_amigo[i].listar_estado;
        }while(dato_amigo[i].listar_estado != "alta" && dato_amigo[i].listar_estado != "baja");
    }
}
//hasta aca funciona//
void actualizar(struct datos dato_amigo[3]){
    int i;
    string apellido;
    cout<<"Elija el apellido para poder actualizar el campo : ";
    cin>>apellido;
    for(i=0;i<3;i++){
        if(apellido==dato_amigo[i].apellido){
            fflush(stdin);
            cout<<"Escriba los nuevos datos "<<endl;
            cout<<i+1<<" º amigo : "<<endl;
            cout<<"ingrese apellido : ";
            cin>>dato_amigo[i].apellido;
            cout<<"ingrese fecha de cumpleaños : ";
            cin>>dato_amigo[i].fecha;
            cout<<"ingrese su estado : ";
            cin>>dato_amigo[i].estado;
            cout<<"ingrese su telefono : ";
            cin>>dato_amigo[i].telefono; 
            cout<<"ingrese nombre de la  calle : ";
            cin>>dato_amigo[i].calle;
            cout<<"ingrese la altura : ";
            cin>>dato_amigo[i].altura;
        }
    }
}