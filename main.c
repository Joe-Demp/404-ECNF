#include <stdio.h>

/*main source file
 *
 *By Joseph Dempsey and Conor Dunne
 */

int main(void){
    int R, C;	//Number of Rows, Columns
	int F;		//Number of vehicles in the fleet
	int N;		//Number of rides
	int B;		//Bonus per ride
	int T;		//Number of steps in the simulation

//  Open Input File
	FILE *fp;
        fp = fopen("a.in", "r");

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

	return 0;
}//end of main
