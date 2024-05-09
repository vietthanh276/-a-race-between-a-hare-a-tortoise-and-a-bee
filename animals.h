// Sources: https://www.tutorialspoint.com/cprogramming/c_header_files.htm for the animals.h .

#ifndef ANIMALS_H
#define ANIMALS_H

// Function prototypes
int update_hare(int current_position);
/***************************************************
* int update_hare(int current_position)
* Determines the new position of the hare after 1 second
*
* Parameters:
* current_position: the current location of the hare
* Returns:
* The new position of the hare
* Notes:
* Generates a random number to determine the hare's move type (sleep, big hop, big slip, small hop, small slip).
* If a slip moves the hare behind the starting line (position < 0), sets the position to 0.
* The returned value is always >= 0.
************************************************/

int update_tortoise(int current_position);
/***************************************************
* int update_tortoise(int current_position)
* Determines the new position of the tortoise after 1 second
*
* Parameters:
* current_position: the current location of the tortoise
* Returns:
* The new position of the tortoise
* Notes:
* Generates a random number to determine the tortoise's move type (fast plod, slip and slow pod).
* If a slip moves the tortoise behind the starting line (position < 0), sets the position to 0.
* The returned value is always >= 0.
************************************************/

int update_bee(int current_position);
/***************************************************
* int update_bee(int current_position)
* Determines the new position of the bee after 1 second
*
* Parameters:
* current_position: the current location of the bee
* Returns:
* The new position of the bee
* Notes:
* Generates a random number to determine the bee's move type (fly fast, fly slow and rest).
************************************************/

#endif // ANIMALS_H
