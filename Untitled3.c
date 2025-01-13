#include <stdio.h>

int main() {
    int ages[] = {20, 20, 46, 45, 10, 13};  // Initialize di array
    int size = sizeof(ages) / sizeof(ages[0]);  // Calculate di size of di array

    for (int i = 0; i < size; i++) {
        if (ages[i] == 45) {
            printf("Address of 45: %p\n", (void*)&ages[i]);  // Print di address of di element with di value 45
            break;  // Exit di loop once di value is found
         }
      }

    return 0;
}
