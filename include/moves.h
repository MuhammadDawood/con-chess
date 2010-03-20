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
* 20Mar10 SCL 	Changed namespace to class                                              *
****************************************************************************************/

class Move {
	int fromX, fromY;
	int toX, toY;
	string CAMove;
	PieceType myType;
	
public:
	Move(int x, y) { /* Move */ }
	Move(sting CAMove) { /* Blah */ }
}
