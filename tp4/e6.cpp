#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;


void tipo_usuario(int notas[15],string usuarios[10]);
void ver_usuarios_admin(string usuarios[10]);
void crear_usuarios_admin(string usuarios[10]);
void borrar_usuarios_admin(string usuarios[10]);
void ver_notas_admin(int notas[15]);
void carga_notas_admin(int notas[15]);
void borrar_notas_admim(int notas[15]);

int main(){
    int notas[15];
    string usuarios[10];
    string nomb[10];
    bool bandera;
    bandera=true;
    
    while(bandera==true){
        tipo_usuario(notas,usuarios);
    }
    
    return 0;
}

void tipo_usuario(int notas[15],string usuarios[10]){
    int tipo_usuario,acciones_admin,acciones_editor;
    
    do{
        cout<<"Defina con que tipo de usuario entrara al sistema : "<<endl;
        cout<<"1 : Admin"<<endl;
        cout<<"2 : Editor"<<endl;
        cout<<"3 : Lector"<<endl;
        cin>>tipo_usuario;
    
        switch (tipo_usuario){
            case 1:
                cout<<"Usted ingreso como Admin "<<endl;
                do{
                    cout<<"Eliga que accion desea realizar :"<<endl;
                    cout<<"1 : Ver usuarios"<<endl;
                    cout<<"2 : Crear usarios"<<endl;
                    cout<<"3 : Borrar usuarios"<<endl;
                    cout<<"4 : Ver notas"<<endl;
                    cout<<"5 : Crear notas"<<endl;
                    cout<<"6 : Borrar notas"<<endl;
                    cin>>acciones_admin;
                }while(acciones_admin>6);         //cierra validacion de accion del admin//
                
                if(acciones_admin==1){
                    ver_usuarios_admin( usuarios);
                }
                if(acciones_admin==2){
                    crear_usuarios_admin(usuarios);
                }
                if(acciones_admin==3){
                    borrar_usuarios_admin(usuarios); 
                }
                if(acciones_admin==4){
                    ver_notas_admin(notas);
                }
                if(acciones_admin==5){
                    carga_notas_admin(notas);
                }
                if(acciones_admin==6){
                    borrar_notas_admim(notas);      //no esta hecho
                }
            break;

            case 2:
                cout<<"Usted ingreso como Editor "<<endl;
                do{
                    cout<<"Eliga que accion desea realizar :"<<endl;
                    cout<<"1 : Ver notas"<<endl;
                    cout<<"2 : Crear notas"<<endl;
                    cin>>acciones_editor;
                }while(acciones_editor>2);

                if(acciones_editor==1){
                    ver_notas_admin(notas);
                }
                if(acciones_editor==2){
                    carga_notas_admin(notas);
                }
            break;

            case 3:
                cout<<"Usted ingreso como Lector "<<endl;
                cout<<"Solo puede ver las notas"<<endl;
                ver_notas_admin(notas);
            break;

        } //cierra la eleccion del tipo de usuario//

    }while( tipo_usuario>3);//cierra validacion tipo de usuario//
        
} //cierra el void

void ver_usuarios_admin(string usuarios[10]){

   for(int i=0;i<10;i++){
        if(usuarios[i]!=""){
        cout<<"Usuario "<<i<<" "<<usuarios[i]<<endl;
        }
    }
}
void crear_usuarios_admin(string usuarios[10]){
    int decision_crer_usuario,i;
    
        for(i=0;i<10;i++){
            cout<<"¿desea crear un usuario?"<<endl;
            cout<<"1 : si    2: no"<<endl;
            cin>>decision_crer_usuario;
            
            if(decision_crer_usuario==1){
                cout<<"Escriba el nombre del usuario que desea crear :"<<endl;
                
                if(usuarios[i]==""){
                    cout<<"Usuario "<<i<<":"<<endl;
                    cin>>usuarios[i];  
                }
                
                else{
                    cout<<"pocision " <<i<< " ocupada"<<endl;
                } 
            } 

            if(decision_crer_usuario==2){
                break;
            }
        }      

    for(int i=0;i<10;i++){
        if(usuarios[i]!=""){
        cout<<"Usuario "<<i<<" "<<usuarios[i]<<endl;
        }
    }
}
void borrar_usuarios_admin(string usuarios[10]){            //solo me deja borrar el primr usuario
    int i,opcion;
    
    for(i=0;i<10;i++){
        usuarios[i];
        cout<<"¿quiere borrar un usuario?"<<endl;
        cout<<"1:si     2:no"<<endl;
        cin>>opcion;
        if(opcion==1){
            cout<<"escriba el nombre del usuario que quiere borrar "<<endl;
            cin>>usuarios[i];   
        }
        if(opcion==2){
            break;
        }
       
    }
}


void ver_notas_admin(int notas[15]){
    for(int i=0;i<20;i++){
        fflush(stdin);
        if(notas[i]>=1 && notas[i]<=10 && notas[i]!=0){
            cout<<"nota "<<i+1<<" : "<<notas[i]<<endl;
        }
    }
}
void carga_notas_admin( int notas [15]){
    for(int i=0;i<15;i++){
        fflush(stdin);
         do{
            cout<<"ingrese la nota "<<i+1<<endl;
            cin>>notas[i];
        }while(notas[i]<1 || notas[i]>10);  
    }
    cout<<endl;
}
void borrar_notas_admim(int notas[15]){

}

