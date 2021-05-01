/*
En este código, se pone en práctica conceptos de apuntadores, creación de arreglos con apuntadores, y operaciones con apuntadores
Este código también tendrá versiones del tipo malloc_n.c, donde a mayor n, se pondrán en práctica conceptos más avanzados
Escrito por: Javier Vega  - javierfvegag@gmail.com
*/


//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	//Declaration
	int * ptr;
	int * ptr2;
	int n;
	int i;
	int sum;
	float avg;
	int largest;
	float std;

	//Get length of array
	printf("Type the number of elements of the array:\n");
	scanf("%d",&n);

	//Initalization
	ptr = (int*) malloc(n*sizeof(int));
	ptr2 = (int*) malloc(n*sizeof(int));
	sum = 0;
	largest = 0;
	std = 0;

	//Get values of elements from user
	for(i = 0; i < n; i++){
		printf("Type the value of element %d: ",i+1);
		scanf("%d",ptr+i);
		sum += *(ptr+i);

	}

	avg = (float) sum/n;

	//Show memory addresses and values
	for(i = 0; i < n; i++){
		printf("&ptr[%d]: %p - prt[%d]: %d\n",i,ptr+i,i,*(ptr+i));		
	}
	
	//Largest elements
	for(i = 0; i < n; i++){
		if(largest <= *(ptr+i)){
			largest = *(ptr+i);
		}
	}

	//Standart deviation
	for(i = 0; i < n; i++){
		*(ptr2+i) = *(ptr+i) - avg;
	}

	for(i = 0; i < n; i++){
		*(ptr2+i) = *(ptr2+i) * *(ptr2+i);
		std += *(ptr2+i);
	}

	std = (float) std / n;
	std = sqrt(std);

	//printf("The sum of the elements is %d\n",sum);
	//printf("The average of the elements is %f\n",avg);
	//printf("The largest element is %d\n",largest);
	printf("The std of the elements is %f\n",std);

	free(ptr);
	free(ptr2);

	return 0;
}
