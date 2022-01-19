#include "func.h"
#include <stdio.h>

    int userMin, userMax, userLength;

    int read_int(void){
        int x;
        scanf("%d", &x);

        return x;
    }

    int promptMin(void){
        userMin = read_int("Enter minimum value: \n");
        return userMin;
    }

    int promptMax(void){
        userMax = read_int("Enter maximum value: \n");
        if(userMax <= userMin){
            userMax = read_int("Maximum value should be larger than %d: \n", userMin);
        }
        else{
            return userMax;
        }

    }

    int promptLength(void){
        userLength = read_int("Enter desired quantity: \n"); 
        int x = userMax - userMin;
        if(userLength > x){
            userLength = read_int("Please enter a number smaller than %d: \n", x); 

        }
        else{
            return userLength;
        }
    }
