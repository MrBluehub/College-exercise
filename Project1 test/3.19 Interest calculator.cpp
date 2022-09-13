#include <stdio.h>;

int main(void) {
	int interest;
	int principal;
	int rate;
	int days;
	int n;

	principal = 1;
		while (principal > -1) {
			printf("Enter loan principal (-1 to end)");
			scanf_s("%d", &principal);
			if (principal > 0) {
				printf("\nEnter interest rate ");
				scanf_s("%d", &rate);
				printf("\nenter the term of the loan ");
				scanf_s("%d", &days);

				interest = principal * rate * days / 365;

				printf("\n %d\n\n", interest);
			}

	}



	return 0;
}