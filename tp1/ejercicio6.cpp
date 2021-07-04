#include <stdio.h>
int main(){
	
    char nombre[20];
    char apellido[20];
	float sueldo;
	int inasistencias;
	int diastrabajados;
	float jornadalaboral=5000; //la jornada laboral es de 8 horas por dia//
	                          
	printf("Ingrese el nombre del trabajador:\n");
	scanf("%s",nombre);
		
	printf("Ingrese el apellido del trabajador:\n");
	scanf("%s",apellido);
	
	printf("ingrese las inasistencias:\n");
	scanf("%d",&inasistencias);
	
	diastrabajados = (30 - inasistencias);
	printf("\n El empleado trabajo: %d DÍAS",diastrabajados);

		
	sueldo= (diastrabajados * jornadalaboral);
	printf("\n Por lo tanto se le debera pagar: %f PESOS",sueldo);
	
	
	
	
	return 0;
}
