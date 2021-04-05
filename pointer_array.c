#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
    int a [10], *iptr;
    iptr=a;
    *iptr=5;
    *(iptr+1)=7;
    printf("la valeur de a[0]= %d\n",a[0]);
    printf("la valeur de a[1]= %d\n",a[1]);

    return 0;     
}