#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "headers.h"

int main(void)
{
    int R, C;	//Number of Rows, Columns
	int F;		//Number of vehicles in the fleet
	int N;		//Number of rides
	int B;		//Bonus per ride
	int T;		//Number of steps in the simulation

//  Open Input File
	FILE *fp;
        fp = fopen("b.in", "r");

//  Scan in First Line
    fscanf(fp, "%d %d %d %d %d %d", &R, &C, &F, &N, &B, &T);

//  Initialize Journey Arrays
	int a[N]; 		//row of start
	int b[N];		//column of start
	int x[N];		//row of finish
	int y[N];		//column of finish
	int s[N];		//earliest start
	int f[N];		//latest finish

	for(int i=0; i<N; i++)
        fscanf(fp, "%d %d %d %d %d %d", &a[i], &b[i], &x[i], &y[i], &s[i], &f[i]);

    fclose(fp);

    printf("\n Rows:\t\t%d", R);
    printf("\n Columns:\t%d", C);
    printf("\n Vehicles:\t%d", F);
    printf("\n Rides:\t\t%d", N);
    printf("\n Bonus:\t\t%d", B);
    printf("\n Steps:\t\t%d", T);

    for(int i=0; i<N; i++)
    {
        printf("\n");
        printf("\n Starting X %d:\t%d", i, a[i]);
        printf("\n Starting Y %d:\t%d", i, b[i]);
        printf("\n Finish X %d:\t%d", i, x[i]);
        printf("\n Finish y %d:\t%d", i, y[i]);
        printf("\n Start Time %d:\t%d", i, s[i]);
        printf("\n End Time %d:\t%d", i, f[i]);
    }

    printf("\n\n");

    int ID[N];
    for(int i=1; i<N; i++)
        ID[i] = i;

    nextPassenger(s, ID, N);

    printf(" ID\t\tStart Time");

    for(int i=0; i<N; i++)
        printf("\n %d\t\t%d", ID[i], s[i]);

//  Cars Position
    int posX[F];    //  X Co-Ordiant of Car F
    int posY[F];    //  Y Co-Ordiant of Car F
//  Cars Destination
    int destX[F];   //  Destination X of Car F
    int destY[F];   //  Destination Y of Car F

    for(int i=0; i<F; i++)
    {
//  Cars Start at Origin [0, 0]
        posX[i] = 0;
        posY[i] = 0;

//  Give Cars First Destination
        destX[i] =
        destY[i]
    }




	return 0;
}
