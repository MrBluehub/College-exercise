#include<stdio.h>

int main231(void) {
	// variables
	int a;
	int b; 
	int n;
 
	
	//counter that counts to 10
	for (n = 0; n < 11; n++) {
		if (n <11) {
			//a = n squared
			a = n * n;
			
			//b = n cubed
			b = a * n;
			
			//prints n, n squard and n cubed
			printf("%d %d %d \n", n, a, b);

		}
		}
	return 0;
}