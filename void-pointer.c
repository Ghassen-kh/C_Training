#include <stdio.h>

void * f( void * );

int main( int argc, char ** argv ) {
	printf("The void-pointer is presented here \n");

	char * cp = "3456";
	int * vp = f(cp);
	printf("%08x\n", * vp);
	
	int a = 7;
	float b = 7.6;
	void *p;
	p = &a;
	printf("Integer variable is = %d", *( (int*) p) );
	p = &b;
	printf("\nFloat variable is = %f", *( (float*) p) );
	return 0;
}

void * f ( void * vp ) {
	return vp;
}
/*
The void pointer in C is a pointer which is not associated with any data types. It points to some data 
location in the storage means points to the address of variables. It is also called general purpose 
pointer. In C, malloc() and calloc() functions return void * or generic pointers.
*/