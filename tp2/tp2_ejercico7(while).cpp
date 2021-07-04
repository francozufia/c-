#include <stdio.h>
int main(){
	
	int i=1,numero,x=0,y=1,z=1;
	
	printf("ingrese un numero:\n");
	scanf("%d",&numero);		
	while(i<numero){		
		z=x+y;
		x=y;
		y=z;
		i++;		
	}
	printf ("El número anterior de la Serie de Fibonacci, es: ");
	printf("%d \n",z);
	printf ("El número posterior de la Serie de Fibonacci, es: ");
	
	z=x+y;
	x=y;
	y=z;

	z=x+y;
	
	
	printf("%d \n",z);
	

	return 0;
	
	}
