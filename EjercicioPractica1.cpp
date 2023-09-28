/*
1.- Lista de 10 nombres y dar el nombre que pide correspondiendo a un número
2.- Imprimir los 10 nombres pero cada vez en un orden distinto
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int x;
	char text [10][10]=
	{
		"Alberto",
		"Beto",
		"Carlos",
		"Daniel",
		"Ernesto",
		"Fausto",
		"Gregorio",
		"Hector",
		"Ivan",
		"Juan"
	};
	printf("Elige el numero del nombre que quieras obtener: ");
	scanf("%d", &x);
	if(x>=1&&x<=10)
	{
		printf("%s", text[x-1]);
	}
	
	return 0;
}
