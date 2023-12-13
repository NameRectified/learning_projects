/**************************************************************
 * Clock -- Program to make a basi clock.
 * 
 * Author: Balaji
 * 
 * Purpose: For projects
 * 
 * Usage: Just run the program.
 * 
***************************************************************/

#include <stdio.h>
#include <windows.h>

int main(void){
    // define hours,minutes and seconds as integers
    int hours,minutes,seconds;
    // add delay of 1000 seconds
    int delay =1000;
    // take input
    printf("Enter time: \n");
    // assign the input values to the respective variables
    scanf("%d %d %d",&hours,&minutes,&seconds);

    if (hours>12||minutes>60||seconds>60){
        printf("Error");
        return 1;
    }
    // infinite loop
    while (1){
        seconds++;
        if (seconds>59){
            minutes++;
            seconds=0;}
        if (minutes>59){
                hours++;
                minutes=0;
            }
        if (hours>12){
            hours=1;
        }
        printf("\n Time: ");
        printf("\n %02d:%02d:%02d",hours,minutes,seconds);
        Sleep(delay); //slows down while loop to make it look natural like a clock
        // to clear screen
        system("cls");

        
    }
}