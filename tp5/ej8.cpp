#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <time.h>
using namespace std;

struct CuentaCorriente{

    int titulares[6];
    double saldo;
    long numcuenta[6];
}cuenta[6];

void RellenarCuenta(struct CuentaCorriente cuenta[6]);
void cuentaaleatoria(CuentaCorriente cuenta[6]); //hice un procedimiento para que el numero de cuenta sea aleatorio y que sea mas segura
void mostrarsaldo( struct CuentaCorriente cuenta[6]);

int main(){

    RellenarCuenta(cuenta);
    cuentaaleatoria(cuenta);
    mostrarsaldo(cuenta);


    return 0;
}

void RellenarCuenta(struct CuentaCorriente cuenta[6]){
    int i;
    for(i=0;i<6;i++){
        cout<<"¿con que cuenta ingresara (1 | 2) : ";
        cin>>cuenta[i].titulares[i];
        cout<<"cuenta generada correctamente para verla ingrese a mostrar saldo "<<endl;
        cout<<"Saldo de la cuenta : ";
        cin>>cuenta[i].saldo;
        cout<<"_____________________________________"<<endl;
    }  
}
void cuentaaleatoria(struct CuentaCorriente cuenta[6]){
    srand(time(NULL));
    int i;
    char aux[35]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','1','2','3','4','5','6','7','8','9'};
    cout<<"Cuenta generada : ";
    for(int j=0;j<20;j++){
        aux[rand()%35];
    }
     for(int j=0;j<20;j++){
        cout<<aux[rand()%35];
    }
    cout<<endl;
}
void mostrarsaldo( struct CuentaCorriente cuenta[6]){
    int titular;
    for(int i=0;i<6;i++){ 
        cuentaaleatoria(cuenta);
        cout<<"Saldo : "<<cuenta[i].saldo<<endl;
        
    }
}

