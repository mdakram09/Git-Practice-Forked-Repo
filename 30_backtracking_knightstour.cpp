// C++ program for Knight Tour problem
#include <bits/stdc++.h>
using namespace std;

#define N 8
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

/* A utility function to check if i,j are valid indexes for N*N chessboard */
int isSafe(int x, int y, int sol[N][N]){
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

/* A utility function to print solution matrix sol[N][N] */
void printSolution(int sol[N][N]){
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << " " << setw(2) << sol[x][y] << " ";
		cout << endl;
	}
}

/* This function solves the Knight Tour problem using Backtracking.
This function mainly uses solveKTUtil() to solve the problem.
It returns false if no complete tour is possible, otherwise return true and prints the tour.
Please note that there may be more than one solutions,
this function prints one of the feasible solutions. */
int solveKT(){
	int sol[N][N];

	/* Initialization of solution matrix */
	for (int x = 0; x < N; x++)
		for (int y = 0; y < N; y++)
			sol[x][y] = -1;

	/* xMove[] and yMove[] define next move of Knight.
	xMove[] is for next value of x coordinate yMove[] is for next value of y coordinate */
	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

	// Since the Knight is initially at the first block
	sol[0][0] = 0;

	/* Start from 0,0 and explore all tours using solveKTUtil() */
	if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0) {
		cout << "Solution does not exist";
		return 0;
	}
	else
		printSolution(sol);

	return 1;
}

/* A recursive utility function to solve Knight Tour problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[8], int yMove[8]){
	int k, next_x, next_y;
	if (movei == N * N)
		return 1;

	/* Try all next moves from the current coordinate x, y */
	for (k = 0; k < 8; k++) {
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if (isSafe(next_x, next_y, sol)) {
			sol[next_x][next_y] = movei;
			if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove) == 1)
				return 1;
			else
			// backtracking
				sol[next_x][next_y] = -1;
		}
	}
	return 0;
}

int main(){
	solveKT();  
	return 0;
}

/*
0  59  38  33  30  17   8  63
37  34  31  60   9  62  29  16
58   1  36  39  32  27  18   7
35  48  41  26  61  10  15  28
42  57   2  49  40  23   6  19
47  50  45  54  25  20  11  14
56  43  52   3  22  13  24   5
51  46  55  44  53   4  21  12
xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
*/

//Time Complexity: There are N^2 Cells and for each, we have a maximum of
//8 possible moves to choose from, so the worst running time is O(8^(N^2)).
//Auxiliary Space: O(N2)

/*No order of the xMove, yMove is wrong, but they will affect the running time of the algorithm drastically. For example, think of the case where the 8th choice of the move is the correct one, and before that our code ran 7 different wrong paths. It’s always a good idea a have a heuristic than to try backtracking randomly. Like, in this case, we know the next step would probably be in the south or east direction, then checking the paths which lead their first is a better strategy.
Note that Backtracking is not the best solution for the Knight’s tour problem. See the below article for other better solutions. The purpose of this post is to explain Backtracking with an example. 
Warnsdorff’s algorithm for Knight’s tour problem
*/


