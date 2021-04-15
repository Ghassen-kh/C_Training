#include<stdio.h>

typedef struct employee
{
    int id;
    const char * name;
    const char * family_name;
}emp_t;


int main(){
    /*
    emp_t ghassen={24,"Ghassen","Khalouaoui"};
    emp_t *ep=&ghassen;
    printf("%s %s has id %d\n",ep->name,ep->family_name,ep->id);
    */ 
    //or 
    struct employee ghassen = {24,"Ghassen","Khalouaoui"};
    printf("%s %s has id %d\n",
    ghassen.name,ghassen.family_name,ghassen.id);
    

    return 0;
}