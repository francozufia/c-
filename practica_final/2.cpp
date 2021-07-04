#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

void numero_entero(int num1 ,int num2);
int contar(int num1,int num2);
int pares(int num1,int num2);
int suma_impares(int num1,int num2);

int main(){
    int num1,num2;
    cout<<"Ingrese el primer numero : ";
    cin>>num1;
    cout<<"Ingrese el segundo numero : ";
    cin>>num2;

    numero_entero(num1,num2);
    contar(num1,num2);
    pares(num1,num2);
    suma_impares(num1,num2);

    return 0;
}
void numero_entero(int num1,int num2){
    int i;
    for(i=num1+1;i<num2;i++){
        cout<<i<<endl;  
    }  
}
int contar(int num1,int num2){
    int cantidad=(num2-2)-(num1-1);
    cout<<"Hay "<<cantidad<<" de numeros en el medio"<<endl;
    return cantidad;
}
int pares(int num1,int num2){
    int i,contador=0;
    for(i=num1+1;i<num2;i++){
        if(i % 2 == 0){
            contador=contador+1;
        }  
    }
    cout<<"Hay "<<contador<<" numeros pares "<<endl;
    return contador;

}
int suma_impares(int num1,int num2){
    int i,suma=0;
    for(i=num1+1;i<num2;i++){
        if(i % 2==1){
            suma=suma+i;
        }
    }
    cout<<"La suma de impares es : "<<suma<<endl;
    return suma;

}