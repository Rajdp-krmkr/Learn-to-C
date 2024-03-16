// Chef and Instant Noodles
// Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.

// Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute.

// How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?

// Input Format
// The first and only line of input contains two space-separated integers X and Y — the number of stoves and the number of minutes, respectively.

//code:

#include <stdio.h>

int main(void) {

    int X , Y;
    printf("Input the number of stoves and number of time (in minutes) respectively : ");
    scanf("%d %d" , &X , &Y);
    
    printf("The maximum number of customers that chef can serve noodles in %d minutes = %d" , Y , X*Y);

}