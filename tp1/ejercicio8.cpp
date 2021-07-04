#include <stdio.h>
int main(){	
	float deuda;
	float multa;
	int opcion;
	
	printf("Bienvenido al sistema de cálculo de cuotas:");
	printf ("\n 1: Tiene beneficio \n 2: No tiene beneficio y su deuda es de este año \n 3: No tiene beneficio y su deuda es del año anterior \n");
	scanf("%d", &opcion);
	
	switch (opcion){
		
		case 1:
			printf ("Lamentablemente no podemos otorgarle otro beneficio");
			break;
			
		case 2:
			printf("ingrese el valor de la multa\n");
			scanf("%f",&multa);
			
			printf("Ingrese la cantidad de cuotas deseadas: \n 1: 1 cuota \n 2: 3 cuotas \n 3: 6 cuotas \n");
			scanf("%d", &opcion);
	
			switch(opcion){		
				case 1:
					deuda= (multa+50);				
					break;

				case 2:
	   	
					deuda= (multa+70)/3;				
					break;
				
				case 3: 		
					deuda= (multa+90)/6;
					break;		    
			}	
			printf("\nla deuda total es de: %f PESOS",deuda);
			break;
	case 3:
	
			printf("ingrese el valor de la multa\n");
			scanf("%f",&multa);
			
			printf("Ingrese la cantidad de cuotas deseadas: \n 1: 1 cuota \n 2: 3 cuotas \n 3: 6 cuotas \n");
			scanf("%d", &opcion);
	
			switch(opcion){ 		
				case 1:
					deuda= (multa+50);				
					break;

				case 2:
	   	
					deuda= (multa+70)/3;				
					break;
				
				case 3: 		
					deuda= (multa+90)/6;
					break;		    
			}	
			deuda = deuda +45;
			printf("\nla deuda total es de: %f PESOS",deuda);
			break;	
	
	}		
			
	
	
	
	
		
	
	return 0;
	}
