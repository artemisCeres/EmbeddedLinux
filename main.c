#include "func.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
int numArray[100];
int randomInt;

int userMin = promptMin();
int userMax = promptMax();
int userLength = promptLength();


for(int i = 1; i < userLength; i++){
    srand(time(NULL));
    randomInt = rand() % userMax + userMin;
    numArray[i] = randomInt;

    printf("%d", randomInt);
}

return 0;

}