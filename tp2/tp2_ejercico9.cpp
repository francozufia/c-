#include <stdio.h>
int main(){
	float total=0,monedas,vuelto=0;
	int gaseosa;
	printf("ATENCION:ESTA MAQUINA SOLO RECIVE MONEDAS DE 50 CENTAVOS O 1 PESO\n");
		do{	
			do {	
				printf("ingrese sus monedas\n");
				scanf("%f",&monedas);						
			}while(monedas != 0.5 && monedas!= 1.0);
			total=total+monedas;		
		}while(total<3.50);
		printf ("El total de pesos ingresado es: %f \n\n", total);		
		printf("ya ingreso la cantidad necesaria,eligida su gaseosa:\n\n");
		do{	
			
			printf("Sólo puede ingresar:\n 1:pepsi\n 2:fanta\n 3:sprite\n\n");
			scanf("%d",&gaseosa);
			
				switch(gaseosa){
					case 1:
						printf("Usted eligió una pepsi\n\n");
						break;
					
					case 2:
						printf("Usted eligió una fanta\n\n");
						break;
					
					case 3:
						printf("Usted eligió una sprite\n\n");
						break;
				}
			
		}while (gaseosa!=1 && gaseosa!=2 && gaseosa!=3);
		
		printf("retire su bebida\n\n");
		
		if(total>3.50){	
			vuelto=total-3.50;
			printf("su cambio es %f\n",vuelto);	
		}
		printf("¡racias por su compra!\n");
				
		return 0;
}

