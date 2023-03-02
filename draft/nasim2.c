#include <stdio.h>

#include <stdlib.h>



int main()

{


	int time, hr, min, sec;
	printf("Input seconds: ");
	scanf("%d", &time);

	min = time/60;

	sec = time % 60;

	hr = min/60;

	min = min % 60;

	printf("%d hr %d min %d sec\n", hr, min, sec);

	return 0;
}
