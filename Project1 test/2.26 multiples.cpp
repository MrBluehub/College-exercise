#include <stdio.h>

int main226(void){
	int number1;
	int number2;

	printf("Enter 2 numbers to determine if one is a multiple of the other \n");
	scanf_s("%d %d", &number1, &number2);
	if (number1 % number2 == 0) {
		printf("%d is a multiple of %d\n", number1, number2);
	}
	else {
		if (number2 % number1 == 0) {
			printf("%d is a multiple of %d\n", number2, number1);
		}
	}
	return 0;
}