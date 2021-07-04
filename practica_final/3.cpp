#include <iostream>
#include <stdlib.h>
using namespace std;

/*prototipos*/

void referencia(int*n1,int* n2);           
void valor(int n1,int n2);

/*funcion principal*/

int main(){
    int n1,n2;
    cout<<"     VALOR"<<endl;
    cout<<"Ingrese el primer numero : ";
    cin>>n1;
    cout<<endl;
    cout<<"Ingrese el segundo numero : ";
    cin>>n2;
    cout<<endl;

    valor(n1,n2);                               //llamada
    cout<<"El primer numero es : "<<n1<<endl<<endl;
    cout<<"El segundo numero es : "<<n2<<endl<<endl;

    cout<<"    REFERENCIA "<<endl;
    cout<<"Ingrese el primer numero : ";
    cin>>n1;
    cout<<endl;
    cout<<"Ingrese el segundo numero : ";
    cin>>n2;
    cout<<endl;

    referencia(&n1,&n2);                        //llamada
    cout<<"El primer numero es : "<<n1<<endl<<endl;
    cout<<"El segundo numero es : "<<n2<<endl<<endl;

    return 0;
}

/*procedimientos*/

void referencia(int* n1,int* n2){                 
    cout<<"Ingrese el primer numero : ";
    cin>>*n1;
    cout<<endl;
    cout<<"Ingrese segundo numero : ";
    cin>>*n2;
    cout<<endl;
}
void valor(int n1,int n2){
    cout<<"Ingrese el primer numero : ";
    cin>>n1;
    cout<<endl;
    cout<<"Ingrese segundo numero : ";
    cin>>n2;
    cout<<endl;
}


/*
En el pasaje por referencia se coloca en el prototipo y en el procedimiento o funcion un: * y en la llamada va un : &
lo que pasa en el pasaje por referencia es que se modifica directamente el valor almacenado en la direccion de memoria,los vectores
y matrices se pasan automaticamente por referencia.

En el pasaje por valor se paso solo el valor de las variable haciendo una copia de los valores 
originales pero sin modificar a los mismos

*/