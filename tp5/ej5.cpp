#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct producto {

    int precio_costo,precio_venta,cantidad_vendida_mes;
    long codigo;

}producto_por_mes[10];

void carga_datos(struct producto producto_por_mes[10]);
void ordenado_ascendente(struct producto producto_por_mes[10]);
void orden_descendente(struct producto producto_por_mes[10]);
void buscar_info(struct producto producto_por_mes[10]);
void utilidad_final_producto(struct producto producto_por_mes[10]);

int main(){

    carga_datos(producto_por_mes);
    ordenado_ascendente(producto_por_mes);
    orden_descendente(producto_por_mes);
    buscar_info(producto_por_mes);
    utilidad_final_producto(producto_por_mes);
    return 0;
}

void carga_datos(struct producto producto_por_mes[10]){
    for(int i=0;i<10;i++){
        cout<<"producto "<<i+1<<" :"<<endl;
        cout<<"ingrese el codigo del producto : ";
        cin>>producto_por_mes[i].codigo;
        cout<<"ingrese el precio costo : ";
        cin>>producto_por_mes[i].precio_costo;
        cout<<"ingrese el precio de venta : ";
        cin>>producto_por_mes[i].precio_venta;
        cout<<"ingrese la cantidad vendida en el mes : ";
        cin>>producto_por_mes[i].cantidad_vendida_mes;
        cout<<"______________________________________"<<endl<<endl;
    }
}
void ordenado_ascendente(struct producto producto_por_mes[10]){
    bool ordenado;
    long aux[10];
    int i;
    do{
        ordenado=true;
        for(i=0;i<10;i++){
            if(producto_por_mes[i].codigo>producto_por_mes[i+1].codigo){
                aux[i]=producto_por_mes[i+1].codigo;
                producto_por_mes[i+1].codigo=producto_por_mes[i].codigo;
                producto_por_mes[i].codigo=aux[i];
                ordenado=false;
            }
           
        }
    }while(!ordenado);
    cout<<"codigo del producto ordenado ascedente : "<<endl;
    for(i=0;i<10;i++){
        cout<<producto_por_mes[i].codigo<<endl;
    }
    cout<<endl;

}

void orden_descendente(struct producto producto_por_mes[10]){
    bool ordenado;
    int i;
    long aux[10];
    do{
        ordenado=true;
        for(i=0;i<10;i++){
            if(producto_por_mes[i].codigo<producto_por_mes[i+1].codigo){
                aux[i]=producto_por_mes[i].codigo;
                producto_por_mes[i].codigo=producto_por_mes[i+1].codigo;
                producto_por_mes[i+1].codigo=aux[i];
                ordenado=false;
            }
        }
    }while(!ordenado);
    cout<<"codigo del producto ordenado descendente : "<<endl;
    for(i=0;i<10;i++){
        cout<<producto_por_mes[i].codigo<<endl;
    }
    cout<<endl;
}
void buscar_info(struct producto producto_por_mes[10]){
    long codigo_busqueda;
    bool busqueda;
    int i;
    cout<<"ingrese el codigo para buscar los datos del producto : ";
    cin>>codigo_busqueda;
    system ("clear");
    do{
        
        for(i=0;i<10;i++){
            if(codigo_busqueda==producto_por_mes[i].codigo){
                busqueda=true;
                cout<<"el precio costo del producto es : $ "<<producto_por_mes[i].precio_costo<<endl;
                cout<<"el precio de venta del producto es : $ "<<producto_por_mes[i].precio_venta<<endl;
                cout<<"la cantidad vendida del producto en el mes es : "<<producto_por_mes[i].cantidad_vendida_mes<<" unidades"<<endl;
                busqueda=false;
            }
        }
    }while(busqueda=false);
    cout<<"__________________________________________________________"<<endl<<endl;
}

void utilidad_final_producto(struct producto producto_por_mes[10]){
    int resta[10];
    int i;
    for( i=0;i<10;i++){
        resta[i]=(producto_por_mes[i].precio_venta - producto_por_mes[i].precio_costo);
    }
    for(i=0;i<10;i++){
        cout<<"La utilidad final del producto "<<i+1<<" : $ "<<resta[i]<<endl; 
    }
    
}