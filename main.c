#include "func.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
int *numArray;
int randomInt;
int userMin, userMax, userLength;

srand(time(NULL));

promptMin(&userMin);
promptMax(&userMax);

if(userMin > userMax)
{
    printf("Maximum value must be greater than minimum value!\n");
    promptMax(&userMax);
}

promptLength(&userLength);
if(userLength > (userMax - userMin))
{
    printf("Quantity must be less than the difference of minimum and maximum value!\n");
    promptLength(&userLength);
}
numArray = (int *) malloc(sizeof(int) * userLength);

for(int i = 0; i < userLength; i++){
    randomInt = (rand() % (userMax - userMin + 1)) + (userMin);
    for(int j = 0; j < i; j++)
    {
        if (numArray[j]==randomInt)
        {
        randomInt = (rand() % (userMax - userMin + 1)) + (userMin);
        }
    }
    numArray[i] = randomInt;
    
}

printf("\nYour %d unique values between %d and %d are:\n", userLength, userMin, userMax);

for(int i = 0; i < userLength; i++){
     
    printf("    Value %d: %d \n", i+1, numArray[i]);
}
return 0;

}
