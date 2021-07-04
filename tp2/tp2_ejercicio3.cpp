#include <stdio.h>
int main(){
	
int plan;
int opcion;
printf(" Bienvenido a su obra social de confianza ,ingrese su plan actual:\n");
printf(" 1:plan A\n 2:plan B o C\n 3:plan D\n 4:otro plan\n");	
scanf("%d",&plan);	

	
	
switch (plan){
	
	case 1:
			printf(" Desea pagar en efectivo o tarjeta,si paga en efectivo le haremos un descuento del 5 por ciento extra\n");	
			printf(" 1:efectivo\n 2:trajeta\n");
			scanf("%d",&opcion);	
	
			if (opcion==1){
					printf("le haremos un descuento del 100 por ciento y le reintegraremos un 5 por ciento extra");
			}
			else if (opcion==2){
					printf("le haremos un descuento del 100 por ciento");
			}
	break;
	
	case 2:
			printf(" Desea pagar en efectivo o tarjeta,si paga en efectivo le haremos un descuento del 5 por ciento\n");	
			printf(" 1:efectivo\n 2:trajeta\n");
			scanf("%d",&opcion);	
	
			if (opcion==1){
					printf("le haremos un descuento del 90 por ciento y le reintegraremos un 5 por ciento extra");
			}
			else if (opcion==2){
					printf("le haremos un descuento del 90 por ciento");
			}
	
	break;
	
	case 3: 
			printf(" Desea pagar en efectivo o tarjeta,si paga en efectivo le haremos un descuento del 5 por ciento\n");	
			printf(" 1:efectivo\n 2:trajeta\n");
			scanf("%d",&opcion);	
	
			if (opcion==1){
					printf("le haremos un descuento del 50 por ciento y le reintegraremos un 5 por ciento extra");
			}
			else if (opcion==2){
					printf("le haremos un descuento del 50 por ciento");
			}
	
	case 4:
			printf(" Desea pagar en efectivo o tarjeta,si paga en efectivo le haremos un descuento del 5 por ciento\n");	
			printf(" 1:efectivo\n 2:trajeta\n");
			scanf("%d",&opcion);	
	
			if (opcion==1){
					printf("le haremos un descuento del 25 por ciento y le reintegraremos un 5 por ciento extra");
			}
			else if (opcion==2){
					printf("le haremos un descuento del 25 por ciento");
			}
	
	break;
	
	
}	

	
		return 0;
	
}
