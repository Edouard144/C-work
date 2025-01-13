#include <stdio.h>
#include <stdlib.h> // For exit()

void rectangle() {
    int length, width;

    printf("Please enter the two sides: \n");
    scanf("%d%d", &length, &width);

    int area = length * width;
    printf("The area of that rectangle is: %d\n", area);
}

void circle() {
    float radius;

    printf("Please enter the radius: \n");
    scanf("%lf", &radius);

    float area = radius * radius * 3.1415;
    printf("The area of the circle is: %.2f\n", area);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- AREA CALCULATOR ---\n");
        printf("Choose one of these options:\n");
        printf("1. Rectangle\n");
        printf("2. Circle\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rectangle();
                break;
            case 2:
                circle();
                break;
            case 3:
                printf("Exiting the program...\n");
                exit(0); // Terminate the program
            default:
                printf("Please enter a valid input.\n");
        }
    }

    return 0; // Unreachable, but good practice
}

