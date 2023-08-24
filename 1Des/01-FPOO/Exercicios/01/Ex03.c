#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	int sal, per;
	char nome;
	
	printf("Seu nome: ");
	scanf("%s", &nome);
	
	return 0;
}
