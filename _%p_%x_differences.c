/*
The %p is used to print the pointer value, and %x is used to print hexadecimal values. Though pointers
can also be displayed using %u, or %x. If we want to print some value using %p and %x then we will not 
feel any major differences. The only difference that can be noticed is that the %p will print some leading
zeros, but %x doesn’t
*/
#include<stdio.h>
main() {
   int x = 59;
   printf("Value using %%p: %p\n", x);
   printf("Value using %%x: %x\n", x);
}