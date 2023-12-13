/**************************************************************
 * Stopwatch -- A program with a similar functionality as a stop watch.
 * 
 * Author: Balaji
 * 
 * Purpose: Practicing arrays
 * 
 * Usage: Just run the program.
 * 
***************************************************************/

#include <stdio.h>
#include <windows.h>

int main(void){
    int hours,minutes,seconds;
    int delay =1000;
    printf("Enter time: \n");
    scanf("%d %d %d",&hours,&minutes,&seconds);
    while(1){
        seconds--;
        if (seconds<0){
            minutes--;
            seconds=59;
        }
        if (minutes<0){
            hours--;
            minutes=59;
        }
        if (hours<0){
            hours=12;
        }
        if (hours==0&&minutes==0&&seconds==0){
            printf("Time up");
            break;
        }
        else{
            printf("\n Time left:");
            printf("\n %02d:%02d:%02d",hours,minutes,seconds);
            Sleep(delay);
            system("cls");}
        
        
    }
}