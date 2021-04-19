//  A pointer in c is an address, which is a numeric value.
// You can perform arithmetic operations on a pointer just as you can on a numeric value.
#include<stdio.h>

const int MAX = 3;
int main (){
    int var[] = {10,100,200};
    int i, *ptr;
    /*Let us have an address array in pointer */
    ptr=var;
    //Incrementing a Pointer: 
    for (i=0;i<MAX;i++){
        printf("Address of var[%d] = %p\n",i,ptr);
        printf("Value of var[%d] = %d\n ",i, *ptr);
        /* Move to the next location */
        ptr++;
    }
    //Decrementing a Pointer: 
       /* let us have array address in pointer */
    ptr = &var[MAX-1];
        
    for ( i = MAX; i > 0; i--) {

        printf("Address of var[%d] = %p\n", i-1, ptr );
        printf("Value of var[%d] = %d\n", i-1, *ptr );

        /* move to the previous location */
        ptr--;
    }

    //Pointer Comparisons:
    i=0;
    while (ptr <= &var[MAX-1]){
              printf("Address of var[%d] = %p\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* point to the next location */
      ptr++;
      i++;
    }
    

    return 0;
}