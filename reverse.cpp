#include <stdio.h>

int main() {
    
    int num, reversed=0;
    
    printf("Please enter your number: \n");
    scanf("%d", &num );
    
    while(num != 0) {
    	int digit = num % 10;
    	reversed = reversed * 10 + digit;
    	num = num/10;
    	
	}
	
	printf("the reversed number is: %d", reversed);

    return 0;
}
