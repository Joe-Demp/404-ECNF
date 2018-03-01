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

//	Function to decstartTimeIDe the Next Passaenger to Pick Up
void nextPassenger(int startTimes[], int startTimeID[], int N)
{
    int swap;
    int i, j;

    for(i=0; i<N; i++)
    {
         startTimeID[i] = i;
    }

    for (i=1; i<N; i++)
    {
        for(j=i; (j>0 && (startTimes[j] < startTimes[j-1])); j--)
        {
            swap = startTimes[j];
            startTimes[j] = startTimes[j-1];
            startTimes[j-1] = swap;

            swap = startTimeID[j];
            startTimeID[j] = startTimeID[j-1];
            startTimeID[j-1] = swap;
        }
    }


}
