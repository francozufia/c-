#include <stdio.h>
int main(){

int lugar;
int opcion;
int dias;

printf("Hola bienvenido,elija su destino para poder calcular su regalo\n");
printf("1:dentro de la provincia\n2:fuera de la provincia\n3:fuera del pais\n4:resto del extranjero\n");
scanf("%d",&lugar);

switch (lugar){
	
	case 1:
			printf("cuantas personas van a viajar?:\n");
			printf("primera opcion: 1 a 2 personas\nsegunda opcion: 3 o mas personas\n");
			scanf("%d",&opcion);
			
			if(opcion==1){
					printf("¡le regalaremos entradas para el espectaculo!\n");
			}
	
			else if(opcion==2){
					printf("¡le regalaremos 2 dias mas de estadia!\n");
			}
	break;
	case 2:
			printf("cuantas personas van a viajar?:\n");
			printf("primera opcion: 1 a 2 personas\nsegunda opcion: 3 o mas personas\n");
			scanf("%d",&opcion);
			printf("elijan la cantidad de dias que van a viajar:\n");
			printf("primera opcion:hasta 7 dias\nsegunda opcion:mas de 7 dias\n");
			scanf("%d",&dias);
			
			if (dias<=7 && opcion==1){
					printf("!les regalaremos un dia mas de estadia!\n");
			}	
	
			else if (dias>7 && opcion==1){
					printf("¡les daremos excursiones gratis!\n");
			}
			
			else if (dias<=7 && opcion==2){
					printf("¡les haremos un descuento espectacular!\n");
			}
	
			else if (dias>7 && opcion==2){
					printf("¡les daremos excursiones gratis!\n");
			}
	break;
	case 3:
			printf("cuantas personas van a viajar?:\n");
			printf("primera opcion: 1 a 2 personas\nsegunda opcion: 3 o mas personas\n");
			scanf("%d",&opcion);
			printf("elijan la cantidad de dias que van a viajar:\n");
			printf("primera opcion:hasta 7 dias\nsegunda opcion:mas de 7 dias\n");
			scanf("%d",&dias);
	
			if (dias<=7 && opcion==1){
					
					printf("!les daremos un juego completo de valijas!\n");
			}	
	
			else if (dias>7 && opcion==1){
				
					printf("¡les daremos excursiones gratis!\n");
			}
	break;		
	case 4:
			printf("elijan la cantidad de dias que van a viajar:\n");
			printf("primera opcion:hasta 7 dias\nsegunda opcion:mas de 7 dias\n");
			scanf("%d",&opcion);
	
			if (opcion==1){
					
					printf("!les daremos un juego completo de valijas!\n");
			}	
	
			else if (opcion==2){
				
					printf("¡les daremos cupones de descuento!\n");
			}
	break;	  	
			
}

	return 0;
}

