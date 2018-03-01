#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

/*Functions created by Joe for the problem*/
int main(void){
	int d;
	d = distance(0, 0, 1, 1);
	printf("%d\n", d);
	return 0;
}

/*Function to calculate the distance between two points (x1, y1) and (x2, y2) on the city map*/
int distance(int x1, int y1, int x2, int y2){
	int d = 0;
	d += abs(x1-x2);
	d += abs(y1-y2);
	return d;
}