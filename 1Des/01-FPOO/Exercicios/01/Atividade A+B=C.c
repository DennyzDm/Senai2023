#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>//faz o pause

int main(){
	setlocale(LC_ALL, "");
	int a, b, c, i;
	printf("Insira Numero Váriavel: ");
	scanf("%d %d %d", &a, &b, &c);
	
	a = (a + b)/c; 
	printf("Resultado: %d", a);
	
	
	return 0;
}
