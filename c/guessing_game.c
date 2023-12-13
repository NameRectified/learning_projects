#include <stdio.h>
int main(void){

    int secret_number; //secret_number is the number the user must guess
    int guess_number;//guess_number is the users input
    int i;
    int guess_limit = 3; //max number of tries the user has before the program shows the answer
    secret_number=9;

    // loop
    for(i=1;i<=guess_limit;i++){
        printf("Guess Number %d :",i);
        scanf("%d",&guess_number);
        if (guess_number==secret_number){
            printf("You guessed it right\n");
            break;
        }
    }
    if (guess_number!=secret_number){
        printf("You lost");
    }
    
}