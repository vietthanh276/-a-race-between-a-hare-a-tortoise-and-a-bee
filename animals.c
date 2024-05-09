#include<stdio.h>
#include<stdlib.h>
#include "animals.h"

int update_hare(int current_position) { // Input: The current position of the hare.
    float val = ((float) rand() / (float)(RAND_MAX)); // Generate a random number between 0 and 1.
    if (val >= 0 && val < 0.25) 
    {
        current_position = current_position + 0; // move type: Sleep
    }
    else if (val >= 0.25 && val < 0.45)
    {
        current_position = current_position + 9; // move type: big hop
    }
    else if (val >= 0.45 && val < 0.55) 
    {
        current_position = current_position - 10; // move type: big slip
    }
    else if (val >= 0.55 && val < 0.8) 
    {
        current_position = current_position + 2; // move type: small hop
    }
    else 
    {
        current_position = current_position - 3; // move type: small slip
    }

    // If a slip moves the hare behind the starting line (position < 0), set the position to 0.
    // The value returned by the function should always be >= 0.
    if (current_position < 0)
    {
        current_position = 0;
    }

    return current_position; // Returns: The new position of the hare after one time step
}

int update_tortoise(int current_position) { // Input: The current position of the tortoise.
    float val = ((float) rand() / (float)(RAND_MAX)); // Generate a random number between 0 and 1.
    if (val >= 0 && val < 0.45)
    {
        current_position = current_position + 3; // move type: fast plod
    }
    else if (val >= 0.45 && val < 0.65)
    {
        current_position = current_position - 5; // move type: slip
    }
    else 
    {
        current_position = current_position + 1; // move type: slow pod
    }

    // If a slip moves the tortoise behind the starting line (position < 0), set the position to 0.
    // The value returned by the function should always be >= 0.
    if (current_position < 0)
    {
        current_position = 0;
    }

    return current_position; // Returns: The new position of the tortoise after one time step
  
}

int update_bee (int current_position) { // Input: The current position of the bee.
    float val = ((float) rand() / (float)(RAND_MAX)); // Generate a random number between 0 and 1.
    if (val >= 0 && val < 0.30)
    {
        current_position = current_position + 2; // move type: fly fast
    }
    else if (val >= 0.30 && val <0.50)
    {
        current_position = current_position + 1; // move type: fly slow
    }
    else 
    {
        current_position = current_position + 0; // move type: rest
    }
    
    return current_position; // Returns: The new position of the bee after one time step
    

}

