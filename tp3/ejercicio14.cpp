#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numero[20];
	int decimal,i=0,resto,resultado,j;
	do{
	cout<<"ingrese un numero decimal para convertirlo a hexadecimal : ";
	cin>>decimal;
	}while(decimal>32000 or decimal<0);
	do{
		resto=decimal % 16;
		resultado=decimal/16;
		numero[i]=resto;
		decimal=resultado;
		i++;
	}while(resultado>15);
	numero[i]=resultado;
	
	cout<<"la converion de decimal a hexadecimal dio : "<<endl;
	for(j=i;j>=0;j--){
		
		if(numero[j]==10){
			cout<<" a";
		}
		else if(numero[j]==11){
			cout<<" b";
		}
		else if(numero[j]==12){
			cout<<" c";
		}
		else if(numero[j]==13){
			cout<<" d";
		}
		else if(numero[j]==14){
			cout<<" e";
		}
		else if(numero[j]==15){
			cout<<" f";
		}
		else{
			cout<<" "<<numero[j];
		}
	}
	return 0;
}
