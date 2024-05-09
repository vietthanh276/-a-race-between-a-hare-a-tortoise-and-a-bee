#include<stdio.h>
#include<stdlib.h>
#include "animals.h"

int main() {

    float seed;
    printf("Please enter a random number seed.\n"); // Prompt the user for a random number seed.
    scanf("%f",&seed); // Get the value from the user.
    srand(seed); // Set the seed.

    // Store the current positions (starting line) of the tortoise, the hare and the bee.
    int current_position_hare = 0;
    int current_position_tortoise = 0;
    int current_position_bee = 0;

    // Set a irrelevant winner first.
    int winner = -1;
    
    // Run the race.
    for (int time = 1; time < 500; time++)
    {
        // Updating the positions at each time step.
        // Update the hare position first, then the tortoise, then the bee!
        current_position_hare = update_hare(current_position_hare);
        current_position_tortoise = update_tortoise(current_position_tortoise);
        current_position_bee = update_bee(current_position_bee);
    
    // Use an integer variable to keep track of who is winning (0 = tortoise, 1 = hare, 2 = bee).
    if (current_position_hare > current_position_tortoise && current_position_hare > current_position_bee) {
    winner = 1; // (1 = hare).
    } else if (current_position_tortoise > current_position_hare && current_position_tortoise > current_position_bee) {
    winner = 0; // (0 = tortoise).
    } else if (current_position_bee > current_position_hare && current_position_bee > current_position_tortoise) {
    winner = 2; // (2 = bee).
    }

    
    // Set a irrelevant previuos winner first.
     static int prevWinner = -1;  

    // Each time a new animal is in the lead, print the current race status to the terminal using the following format:
    // At t = 10, the hare (square 12) has taken the lead.
        if (winner != prevWinner) {
            printf("At t = %d, the ", time); // the time when the current state of the race change.
            if (winner == 0) {
                printf("tortoise (square %d) has taken the lead.\n", current_position_tortoise); // update the tracker value when the hare is winning.
            } else if (winner == 1) {
                printf("hare (square %d) has taken the lead.\n", current_position_hare); // update the tracker value when the tortoise is winning.
            } else if(winner == 2) {
                printf("bee (square %d) has taken the lead.\n", current_position_bee); // update the tracker value when the bee is winning.
            }
            prevWinner = winner;  // Update the previous winner
        }

    
    // If either animal passes the finish line (reaches square 70), print the winner of the race.
    if (current_position_hare >= 70)
    {
        printf("After %d seconds, the hare wins!!\n", time); // Hare win the race.
        break;
    }

    else if (current_position_tortoise >= 70)
    {
        printf("After %d seconds, the tortoise wins!!\n", time); // Tortoise win the race.
        break;
    }

    else if (current_position_bee >= 70)
    {
        printf("After %d seconds, the bee wins!!\n", time); // Bee win the race.
        break;
    }
  
    }

    return 0;


    

}