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

	int a; 		//row of start
	int b;		//column of start
	int x;		//row of finish
	int y;		//column of finish 
	int s;		//earliest start
	int f;		//latest finish

	/*Array prototype to hold the values for each ride*/
	int Rides[N][6] = {{a, b, x, y, s, f},{/*Data for ride 2*/},{/*etc.*/},...};
	return 0;
}//end of main