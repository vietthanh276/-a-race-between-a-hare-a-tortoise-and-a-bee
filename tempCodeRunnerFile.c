#include<stdio.h>
#include<stdlib.h>

int update_hare(int current_position) {
    float val = ((float) rand() / (float)(RAND_MAX));
    printf("%f",val);
    if (val >= 0 && val < 0.25)
    {
        current_position = current_position + 0;
    }
    else if (val >= 0.25 && val < 0.45)
    {
        current_position = current_position + 9;
    }
    else if (val >= 0.45 && val < 0.55) 
    {
        current_position = current_position - 10;
    }
    else if (val >= 0.55 && val < 0.8) 
    {
        current_position = current_position + 2;
    }
    else 
    {
        current_position = current_position - 3;
    }

    return current_position;
}

// int update_tortoise(int current_position) {

// }

// int update_bee (int current_position) {

// }

