/* 
#include<stdio.h>
const int MAX = 3;

int main (){
    int var[]={10,100,200};
    int i, * ptr [MAX];
    for (i=0;i<MAX;i++){
        printf("The value of var[%d] = %d\n",i , var[i]);
        ptr[i]=&var[i]; // Assign the address of integer 
    }
    for (i=0;i<MAX;i++){
        printf("The value of var[%d] = %p\n",i,*ptr[i]);
    }
    return 0;
}
 */
    // using an array of pointers to characters to store a list of strings  
#include <stdio.h>
const int MAX=4;
int main (){
    char *names[]={
        "Ghassen Khalouaoui",
        "Ahmed Khalouaoui",
        "Ali Khalouaoui",
        "Abdallah Khalouaoui"
    };
    int i=0;
    for (i=0;i<MAX;i++){
        printf("Value of names[%d]=%s\n",i,names[i]);
    }
    return 0;
}
