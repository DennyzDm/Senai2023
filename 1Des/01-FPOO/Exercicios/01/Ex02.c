#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int vel, dis;
	
	printf("Informe a velocidade: ");
	scanf("%d", &vel);
	
	printf("Informe a Distancia: ");
	scanf("%d", &dis);
	
	vel= dis/vel;
	printf("A essa velocidade, sua Viajem levará cerca de: %d/h", vel);
	
	return 0;
}
