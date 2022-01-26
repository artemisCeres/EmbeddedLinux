#include "func.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
int numArray[100];
int randomInt;
int y = 0;

promptMin(&y);
int userMin = y;
promptMax(&y);
int userMax = y;
promptLength(&y);
int userLength = y;


for(int i = 1; i < userLength; i++){
    srand(time(NULL));
    randomInt = rand() % userMax + userMin;
    numArray[i] = randomInt;

    printf("%d", randomInt);
}

return 0;

}
