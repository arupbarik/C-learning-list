//We will write a program that generates a random number and asks the player to guess 
//it. If the player’s guess is higher than the actual number, the program displays “Lower 
//number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
//number please”. 
//When the user guesses the correct number, the program displays the number of 
//guesses the player used to arrive at the number. 
//Hint: Use loop & use a random number generator.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL));
    
    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_gusses=0;
    int gussed;
    //printf("Random number: %d\n", random_number);
    do{
      printf("enter the number\n");
      scanf("%d",&gussed);
      no_of_gusses++;
      if(gussed<random_number){
         printf("higher number please!\n");
      }
      if(gussed>random_number){
         printf("lower number please!\n");
      }

    }while(gussed!=random_number);

    printf("YOU WON!!!!\n");
    printf("your no. of attempt  is %d\n",no_of_gusses);
    return 0;
}