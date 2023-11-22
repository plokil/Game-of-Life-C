#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define WIDTH 10
#define HEIGHT 10

/// @brief Prints out the life array
/// @param life the life array (wow)
void print_life(bool life[HEIGHT][WIDTH]) {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            if(life[i][j]) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    bool life[HEIGHT][WIDTH];  
    memset(life, 0, sizeof(life[0][0]) * HEIGHT * WIDTH); // Clears the array from all the junk
    print_life(life);  
}