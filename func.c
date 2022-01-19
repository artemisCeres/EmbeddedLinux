#include "func.h"
#include <stdio.h>

    int userMin, userMax, userLength;

    int read_int(void){
        int x;
        scanf("%d", &x);

        return x;
    }

    int promptMin(void){
        printf("Enter minimum value: \n");
        scanf("%d", &userMin);
        return userMin;
    }

    int promptMax(void){
        printf("Enter maximum value: \n");
        scanf("%d", &userMax);
        if(userMax <= userMin){
            printf("Maximum value should be larger than %d: \n", userMin);
            scanf("%d", &userMax);
        }
        else{
            return userMax;
        }

    }

    int promptLength(void){
        printf("Enter desired quantity: \n"); 
        scanf("%d", &userLength);
        int x = userMax - userMin;
        if(userLength > x){
            printf("Please enter a number smaller than %d: \n", x); 
            scanf("%d", &userLength); 

        }
        else{
            return userLength;
        }
    }
