#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <time.h>
using namespace std;

struct CuentaCorriente{

    int titulares;
    double saldo;
    long numcuenta;
}cuenta[2];

void RellenarCuenta(struct CuentaCorriente cuenta[2]);
void cuentaaleatoria(CuentaCorriente cuenta[2]); //hice un procedimiento para que el numero de cuenta sea aleatorio y que sea mas segura
void mostrar(struct CuentaCorriente cuenta[2]);

int main(){
    RellenarCuenta(cuenta);
    mostrar(cuenta);
    return 0;
}

void RellenarCuenta(struct CuentaCorriente cuenta[2]){
    int i;
    for(i=0;i<2;i++){
        cout<<"Elija que cuenta va a usar 1 o 2 : ";
        cin>>cuenta[i].titulares;
        switch(cuenta[i].titulares){
            case 1:
                cuentaaleatoria(cuenta);
                cout<<"Saldo de la cuenta : ";
                cin>>cuenta[i].saldo;
                cout<<"______________________________________"<<endl;
            break;
            case 2:
                cuentaaleatoria(cuenta);
                cout<<"Saldo de la cuenta : ";
                cin>>cuenta[i].saldo;
                cout<<"______________________________________"<<endl;
            break;
        }  
    }  
}
void cuentaaleatoria(struct CuentaCorriente cuenta[2]){
    srand(time(NULL));
    int j;
    char aux[35]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','1','2','3','4','5','6','7','8','9'};
    char num_cuenta[20];
    cout<<"Cuenta generada : ";
    for( j=0;j<20;j++){
        num_cuenta[j]=aux[rand()%35];   
    }
    for(j=0;j<20;j++){
        cout<<num_cuenta[j];
    }
    cout<<endl;  
}
void mostrar(struct CuentaCorriente cuenta[2]){
    int j;
    for(int i=0;i<2;i++){
        cout<<"CUENTA "<<i+1<<endl;
        cuentaaleatoria(cuenta);
        cout<<"Saldo : "<<cuenta[i].saldo;

    }
}
