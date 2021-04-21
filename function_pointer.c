#include<stdio.h>
#include<time.h>

void getSeconds (unsigned long *par);
double getAverage (int *arr, int size );


int main (){
    unsigned long sec ;
    getSeconds(&sec);
    // print the actual value 
    printf("number of seconds : %ld\n",sec);
    /* The function which can accept a pointer, can also accept an array as shown in the following axample of the function getAverage */
    
    // An int array with 5 elements :
    int balance[5] = {1000,2,3,17,50};
    double avg;
    // pass pointer to the array as an argument 
    avg = getAverage(balance,5);
    // output the returned value 
    printf("Average value is : %f\n",avg);
    return 0;
}

void getSeconds (unsigned long *par ){
    // get the current number of seconds 
    *par = time(NULL);
    return;
}
double getAverage (int *arr, int size ){
    int i , sum =0 ;
    double avg;
    for (i=0;i<size;++i){
        sum+= arr[i];
    }
    avg=(double)sum / size;
    return avg;
}