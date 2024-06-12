/* Write a Program to print the given pattern.
- - - - - - - - 
|             |
R             |
N             |
W             |
|             |
- - - - - - - -
*/

#include <stdio.h>

int main() {
    int rows = 7; // Adjusted to include the additional row for the bar above 'R'
    int columns = 8;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j < columns; j++) {
            // Print dashes for first and last rows
            if (i == 0 || i == rows - 1) {
                printf("-");
            }
            // Print vertical bars for first and last columns, including specific letters
            else if (j == 0 || j == columns - 1) {
                if (i == 1 && j == 0)
                    printf("|");
                else if (i == 2 && j == 0)
                    printf("R");
                else if (i == 3 && j == 0)
                    printf("N");
                else if (i == 4 && j == 0)
                    printf("W");
                else
                    printf("|");
            }
            // Print spaces for the rest of the area
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

