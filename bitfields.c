#include <stdio.h>
#include <stdbool.h>
typedef struct preferences {
    bool likesChess: 1;
    bool hasHair: 1;
    bool hasInternet: 1;
    bool hasBoy : 1;
    unsigned int numberOfChildren: 4;
}preferences;


int main (){
    struct preferences ghassen;
    ghassen.likesChess=1;
    ghassen.hasHair=false;
    ghassen.hasInternet=true;
    ghassen.hasBoy =false;
    ghassen.numberOfChildren=2;

    if(ghassen.likesChess)printf("ghassen likes Chess\n");
    if(ghassen.hasHair)printf("ghassen has hair\n");
    if(ghassen.hasInternet)printf("ghassen has net\n");
    if(ghassen.hasBoy )printf("ghassen has a Boy \n");
    printf("ghassen has %d children \n",ghassen.numberOfChildren);
    return 0;
}
// Remarque : bitfields can be a source of trouble  in a concurrent threaded program because all of bits in a unit must be read and written in the same time !
