#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

/*Function to calculate the distance between two points (x1, y1) and (x2, y2) on the city map*/
int distance(int x1, int y1, int x2, int y2){
	int d = 0;
	d += abs(x1-x2);
	d += abs(y1-y2);
	return d;
}

int firstPassenger(int s[], int N)
{
    int min = s[0];
    int index = 0;
    int counter = 0;

    for(int i=1; i<N; i++)
    {
        if(s[i] < min)
        {
            min = i;
            index = i;
            counter = 0;
        }
        else if(s[i] == min)
            counter ++;
    }
}
