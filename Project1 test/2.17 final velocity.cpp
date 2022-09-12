#include <stdio.h>

int main(void) {
	int velocity;
	int acceleration;
	int ustart;
	int Space;
	int time;

	printf("Enter the initial velocity \n [m/s]");
	scanf_s("%d", &ustart);
	printf("Enter the Acceleration \n [m/s^2]");
	scanf_s("%d", &acceleration);
	printf("Enter the expired time \n [s]");
	scanf_s("%d", &time);


		velocity = ustart + acceleration * time;
		Space = ustart * time + 0,5 * acceleration * time ^ 2;

		printf("Velocity is: %d [m/s] \n", velocity);
		printf("Distance travelled (space) is: %d [m]", Space);

	return 0;
}
