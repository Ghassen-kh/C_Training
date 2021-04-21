// C allows to return a pointer from a function, to do so; you xould have to declare a function returning a pointer as in the following example :
// it is not a good idea to return the address of a local variable outside the function, so you would have to define the local variable as a static variable 
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

// A function to generate and return  random numbers
int * getRandom (){
    static int r[10];
    int i;
    //Set the seed 
    srand((unsigned)time(NULL));
    for (i=0;i<10;++i){
        r[i]=rand();
        printf("%d\n",r[i]);
    }
    return r;
}
// main function 
int main (){
    int *p; 
    int i;
    p=getRandom();
    for (i=0;i<10;i++){
        printf("*(p+[%d]) : %d\n",i,*(p+i));
    }
    return 0;
}