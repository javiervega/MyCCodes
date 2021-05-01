#include <stdio.h>
#include <string.h>

int main() {
	int i; 
	char str[] = "Hello World";

	for(i = 0; i < strlen(str); i++){
		printf("str[%d]: %c\n",i,str[i]);
	}

	return 0;
}
