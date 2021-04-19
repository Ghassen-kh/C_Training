#include<stdio.h>
const int MAX = 3;

int main (){
    int var[]={10,100,200};
    int i, * ptr [MAX];
    for (i=0;i<MAX;i++){
        printf("The value of var[%d] = %d\n",i , var[i]);
        ptr[i]=&var[i]; /* Assign the address of integer */
    }
    for (i=0;i<MAX;i++){
        printf("The value of var[%d] = %p\n",i,*ptr[i]);
    }
    return 0;
}