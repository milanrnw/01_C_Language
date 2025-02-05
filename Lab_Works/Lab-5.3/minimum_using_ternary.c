//Write a Program to find the minimum number from the given 3 numbers using the ternary operator.
#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input three variables
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Using ternary operator to find minimum value
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    
    // Output the minimum value
    printf("Minimum value is: %d\n", min);
    
    return 0;
}