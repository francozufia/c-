#include <stdio.h>
int main(){
	
	float edad;
	
	printf("Ingrese la edad de la persona para saber su categoria:\n");
	scanf("%f",&edad);
	
	if(edad<=1){
		printf("recien nacido\n");
	}
	
	else if(edad<=5&&edad>1){
		printf("infante\n");
	}
	
	     if(edad<=12&&edad>6){
			 printf("niño\n");
         }
	
	     if(edad<=18&&edad>12){
			 printf("preadolescente\n");
		}
	
	     if(edad<=25&&edad>18){
			 printf("adolescente\n");
		}
	
     	 if(edad<=35&&edad>25){
			 printf("adulto joven\n");
		}
	
	     if(edad<=50&&edad>35){
			 printf("adulto\n");
		}
	
	     if(edad>50)
	         printf("adulto mayor");
	
	
	
	return 0;
}
