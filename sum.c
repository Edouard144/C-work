#include <stdio.h>

int main() {
    int sum[8];
    int i, total = 0;  // Initialize a variable to store the total sum
    
    printf("Please enter your eight numbers:\n");
    
    // Loop to read 8 numbers from the user
    for (i = 0; i < 8; i++) {
        scanf("%d", &sum[i]);
    }
    
    // Calculate the sum of the numbers
    for (i = 0; i < 8; i++) {
        total += sum[i];
    }
    
    // Print the total sum
    printf("The sum of those numbers is: %d\n", total);
    
    return 0;
}

