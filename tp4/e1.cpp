#include <iostream>
using namespace std;

void operacion(float numero1,float numero2);

int main(){
    float numero1,numero2;
    
    operacion(numero1,numero2);

    return 0;
}

void operacion(float numero1,float numero2){

    float suma,resta,division,multiplicacion;
    int opciones;


    cout<<"elija una de las operaciones a realizar"<<endl;
    cout<<" 1: suma"<<endl;
    cout<<" 2: resta"<<endl;
    cout<<" 3: division"<<endl;
    cout<<" 4: multiplicacion"<<endl;
    cout<<endl;
    cin>>opciones;

    cout<<"ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>numero2;
    
    switch (opciones){

        case 1:
            suma=numero1+numero2;
            cout<<"la suma es :"<<suma<<endl;
        break;
        case 2:
            resta=numero1-numero2;
            cout<<"la resta es :"<<resta<<endl;
        break;
        case 3:
            division=numero1/numero2;
            cout<<"la division es :"<<division<<endl;
        break;
        case 4:
            multiplicacion=numero2*numero1;
            cout<<"el producto es :"<<multiplicacion<<endl;
        break;
    }
}

