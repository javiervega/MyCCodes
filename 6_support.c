#include <stdio.h>

/*Variable declaration*/
extern int count;

int write_extern(void){
	printf("Count is %d\n",count);
}
