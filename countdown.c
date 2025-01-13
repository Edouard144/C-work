#include <stdio.h>

int main() {
     int num;
     
     printf("Please enter a number for a countdown list: \n");
     scanf("%d", &num);
     
     for(int i=num; i>=1; i--) {
     	
     	printf("%d \n", i);
	 }
    return 0;
}


