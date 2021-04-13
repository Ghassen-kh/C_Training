#include<stdio.h>
int main(){
    for (int i=0; i<5;++i){
    int j=12;
    j+=i;
    printf("i is %d, j is %d\n",i,j);
    }
    for (int i=0; i<5;i++){
        static int j=12;
        j+=i;
        printf("i is %d, j is %d\n",i,j);
    }
    return 0;
}
