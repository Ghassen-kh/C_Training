/*Write the following macros:
 Denying a constant PI
 Calculating the cube of a number
 Calculating the sum of two numbers
 Calculating the volume of a sphere (V = (4πR^3)/3).
You will use these macros in a hand to calculate the sum of the volumes of N spheres, whose radius
is passed in parameter of the program.*/

#include <stdio.h>
#define PI 3.14159265359
#define CUBE(b) b*b*b
#define add(a,b) a+b
#define volume(r) 4*PI*r*r*r/3
int main(){
    printf("This is a test\n");
    printf("The constant pi is equal to : %lf \n",PI);
    int n;
    printf("put a number to calculate its cube\n");
    scanf("%d",&n);
    printf("the cube of %d is %d\n",n,CUBE(n));
    int a,b;
    printf("put the first number to add\n");
    scanf("%d",&a);
    printf("put the second number to add\n");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d \n",a,b,add(a,b));
    float r;
    printf("put the radius of the sphere \n");
    scanf("%f",&r);
    printf("The volume of a sphere where the ray is %f is %f\n",r,volume(r));
    printf("Now we will calculate the the sum of the volumes of N spheres, whose radius\
    is passed in parameter of the program \n");
    printf("put the number N of spheres\n");
    int N;
    scanf("%d",&N);
    float all=0;
    for(int i=0;i<N;i++){
        printf("put the radius of sphere number %d\n",i+1);
        float rd;
        scanf("%f",&rd);
        all+=volume(rd);
    }
    printf("The sum of volumes of spheres is : %f",all);
    return 0;
}