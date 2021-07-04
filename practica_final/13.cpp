#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void palindromo(char cadena[20]);

int main(){
    char cadena[20];
    cout<<"Ingrese la palabra : ";
    cin>>cadena;
    palindromo(cadena);
    return 0;
}

void palindromo(char cadena[20]){
    int i;
    char aux[20];
    for(i=(strlen(cadena)-1);i>=0;i--){
        aux[strlen(cadena)-1-i]=cadena[i];
    }
    aux[strlen(cadena)]='\0';
    if(strcmp(cadena,aux)==0){
        cout<<"Palindroma"<<endl;
    }
    else{
        cout<<"No palindroma"<<endl;
    }
}
