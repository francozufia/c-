#include <stdio.h>
int main(){
	
	int n,i;
	
	do{
		printf("ingrese un numero para saber si es primo\n");
		scanf("%d",&n);
		
		if(n%i==0){
				printf("el numero es primo\n");
		}
		
		
	}while(n%2==0);
	
	
	return 0;
}
