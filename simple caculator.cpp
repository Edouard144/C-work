#include <stdio.h>

int main() {
	char operations;
	double num1 , num2 , result;
	
	printf("Please Choose an Operations(+,-,*,/):");
	scanf("%c", &operations);
	
	printf("Please enter your two numbers:\n");
	scanf("%lf %lf", &num1, &num2);
	
	switch (operations) {
		case '+' :
			result = num1 + num2;
			printf("Result: %lf", result);
			break;
		case '-' : 
		    result = num1 - num2;
			printf("Result: %lf", result);
			break;
		case '*' : 
		    result = num1 * num2;
			printf("Result: %lf", result);
			break;
		case '/' :
		    if (num2 != 0 ) {
		    	result = num1 / num2;
			printf("Result: %lf", result);
			} else {
				printf("infinity due to division by 0");
			}
		   	break;		
		default:
		  	 printf("Invalid Oerations");	
	}
	
	
	return 0;
}