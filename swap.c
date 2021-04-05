#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//swap  : swap data of type int :
void swap (int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    return;
}
//swap 2 : swap data of any type :
int swap2(void *a,void *b, int size ){
    void *tmp;
    if((tmp=malloc(size))==NULL)
    return -1;
    memcpy(tmp,a,size);
    memcpy(a,b,size);
    memcpy(b,tmp,size);
    free(tmp);
    return 0;
}
int main (int argc, char **argv){
    //swaping 2 integers : 
    int a=10,b=15;
    swap(&a,&b);
    printf("The new value of a is : %d\n",a);
    printf("The new value of b is : %d\n",b);
    //swaping 2 floats : 
    float x=25,y=36;
    swap2(&x,&y,4);
    printf("The new value of x is : %f\n",x);
    printf("The new value of y is :%f\n",y);
    //swaping 2 characters :  
    char *c1="a",*c2="b";
    swap2(&c1,&c2,1);
    printf("The new value of c1 is : %c\n",*c1);
    printf("The new value of c2 is : %c\n",*c2);
}