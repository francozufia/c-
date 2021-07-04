#include <stdio.h>
int main(){
	
	int n1,n2,n3, mayor=0, menor=0;
	
	printf("digite tres numeros\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	mayor = n1;
	menor = n1;
	
	if (n2>mayor){
		mayor = n2;
	}
	if (n3>mayor){
		mayor = n3;
	}
	
	if (n2 < menor){
		menor = n2;
	}
	if (n3 < menor){
		menor = n3;
	}
	
	printf ("\n El menor de los tres números es: %d", menor);
	printf ("\n El mayor de los tres números es: %d", mayor);
	
		
	return 0;
}











































