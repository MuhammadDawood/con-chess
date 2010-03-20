/****************************************************************************************
* File: moves.h                                                                        *
* Authors: Stuart Larsen(SCL)                                                           *
* Description:                                                                          *
* 	Originally this was to handle all the moves, but instead I think i may try      *
*	something a little different. Instead of passing around pairs for moves, and    *
* 	then also having a giant vector of all the games moves, why not make a simple   *
*	object for each move. It could contain it's move in both displayments(coord,    *
*	chess algebra) and would have plenty of functions to modify it.                 *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
****************************************************************************************/

namespace Move {

	struct Move {
		int fromX, fromY;
		int toX, toY;
		string CAmove; // Chess algabraic move
	}

	Move makeMove(x, y) { /* ... */ }
	Move makeMove(string CAMove) { /* ... */ }
}


