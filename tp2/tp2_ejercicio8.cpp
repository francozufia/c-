#include <stdio.h>
int main(){
	
int i,n,x;
	printf("ingrese un numero para saber el tamaño de la piramide:\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
			for(x=1;x<=2*i-1;x++){    //cantidad de asteriscos x fila
					printf("*");			
			}
			printf("\n");
	}
	return 0;
}
