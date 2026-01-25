#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player, computer=(rand() % 3);
    /*
    0 = snake
    1 = water
    2 = gun
    */
    
    do{
        printf("\nChoose 0 for snake, 1 for water and 2 for gun :- ");
    scanf("%d", &player);
    
    if(player > 2 || player < 0){
    printf("INVALID INPUT TRY AGAIN");
    }
    }while (player < 0 || player > 2);
   
    printf("The player chose %d\n", player); 
    printf("The computer choose the number %d\n", computer);

    if (player == 1 && computer == 0){
        printf("Computer wins (The Snake drank the water)");
    }
    else if (player == 0 && computer == 1){
        printf("Player wins (The Snake drank the water *slurp*)");
    }
    else if (player == 0 && computer == 2){
        printf("Computer wins (The Snake was shot dead)");
    }
    else if (player == 2 && computer == 0){
        printf("Player wins (The Snake was shot dead)");
    }
    else if (player == 1 && computer == 2){
        printf("Player wins (The Gun got rust)");
    }
    else if (player == 2 && computer == 1){
        printf("Computer wins (The Gun got rust)");
    }
    else if (player == 0 && computer == 0){
        printf("Both snakes stared at each other");
    }
    else if (player == 1 && computer == 1){
        printf("It became a puddle , dw the government did not fix it)");
    }
    else if (player == 2 && computer == 2){
        printf("Stare battle ig idk");
    }

    return 0;
}