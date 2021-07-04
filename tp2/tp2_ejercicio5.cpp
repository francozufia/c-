#include <stdio.h>
int main(){
	
	int num,i,contador=0;
	printf("ingrese un numero\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
			if(num%i==0){
					contador++;
			}
		
		
	}
	
	if(contador>2){
		printf("el numero no es  primo\n");
	}
	else {
		printf("el numero es primo\n");
	}
	
	
	return 0;
}	
