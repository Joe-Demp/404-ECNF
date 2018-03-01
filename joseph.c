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

//	Function to decide the Next Passanger to Pick Up
int nextPassenger(int s[], int N)
{
    int swap;
    int ID[N];

    for(int i=0; i<N; i++)
        ID = i;
    for(int i=1; i<N; i++)
    {
        j = i;

        while(j>0 && s[j] < s[j-1])
        {
            swap = s[j];
            s[j] = s[i];
            s[i] = swap;

            swap = ID[j];
            ID[j] = ID[i];
            ID[i] = swap;
        }
    }
}
