#include <stdio.h>
//computing basic recursion
int fact(int n) {
if (n < 0)
return 0;
else if (n == 0)
return 1;
else if (n == 1)
return 1;
else
return n * fact(n - 1);
}
//computing tail recursion 
int fact_tail( int n, int a){
    if(n<0)
    return 0;
    else if (n==0)
    return 1;
    else if (n==1)
    return a;
    else return fact_tail(n-1,n*a);
}
int main(int argc,char **argv){
    int n=5;
    printf("Fact of %d = %d\n",n,fact(n));
    int x=5,y=1;
    printf("Fact of %d using fact tail  = %d",x,fact_tail(x,y));

    return 0;
}