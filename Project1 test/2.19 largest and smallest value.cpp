#include <stdio.h>

int main219(void){
	int integer1;
	int integer2;
	int integer3;
	int smallest;
	int largest;

	printf("Enter 3 integers\n");
	scanf_s("%d%d%d", &integer1,&integer2, &integer3);
	printf("Sum is %d\n", integer1+integer2+integer3);
	printf("Average is %d\n", (integer1 + integer2 + integer3)/3);
	printf("Product is %d\n", integer1 * integer2 * integer3);

	if (integer1 < integer2 & integer1 < integer3) {
		printf("Smallest is %d\n", integer1);
	}
	else {
		if (integer2 < integer3) {
			printf("Smallest is %d\n", integer2);
		}
		else { printf("Smallest is %d\n", integer3); }
	}

	if (integer1 > integer2 & integer1 > integer3) {
		printf("largest is %d\n", integer1);
	}
	else {
		if (integer2 > integer3) {
			printf("largest is %d\n", integer2);
		}
		else { printf("largestis %d\n", integer3); }
	}

}