#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct catalogo_piezas{

    double num_piezas;
    float coste_pieza;
    int ancho;
    int largo;
    int alto;
}catalogo[5];

int main(){  
    
    for(int i=0;i<5;i++){
        cout<<"Ingrese numero de piezas tipo "<<" "<<i+1<<endl;
        cin>>catalogo[i].num_piezas;
        cout<<"Ingrese coste de las piezas tipo "<<" "<<i+1<<endl;
        cin>>catalogo[i].coste_pieza;
        cout<<"Ingrese el ancho de la pieza tipo "<<" "<<i+1<<endl;
        cin>>catalogo[i].ancho;
        cout<<"Ingrese el largo de la pieza tipo "<<" "<<i+1<<endl;
        cin>>catalogo[i].largo;
        cout<<"Ingrese el alto la pieza tipo "<<" "<<i+1<<endl;
        cin>>catalogo[i].alto;
        cout<<"__________________________________"<<endl<<endl;
    }
system ("clear");

    for(int i=0;i<5;i++){
        cout<<"Numero de piezas tipo "<<i+1<<" : "<<catalogo[i].num_piezas<<endl;
        cout<<"Precio de piezas tipo "<<i+1<<" : "<<catalogo[i].coste_pieza<<endl;
        cout<<"Ancho de piezas tipo "<<i+1<<" : "<<catalogo[i].ancho<<endl;
        cout<<"Largo de piezas tipo "<<i+1<<" : "<<catalogo[i].largo<<endl;
        cout<<"Alto de piezas tipo "<<i+1<<" : "<<catalogo[i].alto<<endl;
        cout<<"________________________________"<<endl<<endl;
    }

    return 0;
}