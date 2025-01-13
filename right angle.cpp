#include <stdio.h>

int main() {
    int size, i, j;

    printf("Please enter a number you want: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        for(j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
