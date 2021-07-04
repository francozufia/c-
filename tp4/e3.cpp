#include <iostream>
#include <stdlib.h>
using namespace std;

float salario (int horastrabajadas,float preciohora);

int main(){

int horastrabajadas;
float preciohora,ganancias;

cout<<"ingrese el precio de la hora:";
cin>>preciohora;
cout<<"ingrese las horas trabajadas:";
cin>>horastrabajadas; 

cout<<"El empleado gano : "<<salario (horastrabajadas,preciohora)<<" pesos , descontandole el 10 por cieto para la caja de ahorro "<<endl;

return 0;
}

float salario (int horastrabajadas,float preciohora){
    float sueldo=0.0,descuento=0.0,ganancias=0.0;

    sueldo=horastrabajadas*preciohora;
    descuento=sueldo*0.10;
    ganancias=sueldo-descuento;

    return ganancias;
}



