#include <stdio.h>
int main(){
	
	int i,numero,x=0,y=1,z=1;
	
	printf("ingrese un numero:\n");
	scanf("%d",&numero);
		
	for(i=1;i<numero;i++){	
		z=x+y;
		x=y;
		y=z;			
			
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

