/*
En este código, se pone en práctica conceptos de constantes, impresión en consola y muestra de estructura básica de un programa en C
Este código también tendrá versiones del tipo basico_n.c, donde a mayor n, se pondrán en práctica conceptos más avanzados
Escrito por: Javier Vega  - javierfvegag@gmail.com
*/

#include <stdio.h>

#define LENGTH 10
#define WIDTH 5

int main() {
	int area;

	area =  LENGTH * WIDTH;

	printf("The area is: %d\n",area);

	return 0;
}
