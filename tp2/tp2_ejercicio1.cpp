#include <stdio.h>
int main(){
	
int ubicacion;

printf(" Bienvenido,informe en que zona invertira:\n");	
printf(" 1:godoy cruz\n 2:ciudad\n 3:las heras\n");
scanf("%d",&ubicacion);

int precio;
int opcion;


switch (ubicacion){
	
case 1:
		printf("ingrese el valor que esta dispuesto a invertir:\n");
		scanf("%d",&precio);

		if(precio<=70000){
		printf("esta en condiciones de invertir\n");	
		}	
		else if(precio>70000){
			printf("¿es casa y tiene cochera?\n");
			printf(" 1:si tiene cochera y es casa\n 2:no tiene cochera y no es casa\n ");
			scanf("%d",&opcion);
		}	
		if(opcion==1){
			printf("si esta en condiciones de invertir\n");
		}		
		else if(opcion==2){
			printf("no deseo invertir , mejor busco otro inmueble\n");
		}	
break;		
case 2:	

		printf("ingrese el valor que esta dispuesto a invertir:\n");
		scanf("%d",&precio);

        if(precio>100000){
			printf("no deseo invertir");
		}
		else if(precio<=100000){
			
			printf(" 1:es casa\n 2:departamento con cochera\n 3:departamento sin cochera\n");
			scanf("%d",&opcion);
			if (opcion==1){
				printf("invierte\n");
			}
		
			else if (opcion==2){
					printf("invierte\n");
			}
			else if (opcion==3){
			
				printf("tiene cochera cercana?\n");
				printf(" 1:tiene cochera cercana\n 2:no tiene cochera cercana\n");
				scanf("%d",&opcion);
				
				if(opcion==1){
						printf("invierte");
				}
				else if(opcion==2){
						printf("no invierte");
				}
						
			}
			
			
		}
break;	
case 3:
	printf(" 1:es departamento con cochera\n2:no tiene cochera\n");
	scanf("%d",&opcion);
	if(opcion==1){
		printf("invierte\n");
	}	
	else if(opcion==2){
			printf("no invierte\n");
	}
	
break;	
}	
	return 0;
	
}
