#include <stdio.h>

int main() {
   int ages[] = {15,16,17,18,19,14,13};
   int size = sizeof(ages);
   
   for(int i=0; i<size; i++) {
   	if(ages[i] == 13) {
   		printf("the adress of 13 is: %p ", &ages[i]);
   		break;
	   }
   }
   
    return 0;
}