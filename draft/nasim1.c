#include <stdio.h>

int main() {
	// declaring variables with corresponding data types
	int interval, h, m, s;

	// getting time interval from user and initializing `interval` variable with user inputed data
	printf("Input interval in second: ");
	scanf("%d", &interval);

	// converting inputed interval to hour
	h = (interval / 3600);
	// converting inputed interval to minute
	m = (interval - (h * 3600)) / 60;
	// converting inputed interval to second
	s = (interval - (h * 3600) - (m * 60));

	// printing desired output
	printf("%d hr %d min %d sec", h, m, s);

	// returning void
	return 0;
} // main
