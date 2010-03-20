/****************************************************************************************
* File: piece.h                                                                         *
* Authors: Stuart Larsen(SCL)                                                           *
* Description:                                                                          *
*	Base class for all pieces, not to be used by itself. Board object will have     *
*	a container member holding all pieces. draw() member must be implemented.       *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
* 20Mar10 SCL	Cleaned up class.                                                       *
****************************************************************************************/
//#include "error.h"
enum Color { BLACK, WHITE };
enum Type { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING };

class Piece
{
protected:
	size_t myX; myY; // Values 0-7
	Color myColor; // Black or white
	Type myType; // Type of piece
	int myValue; // Point value, pawn = 1, queen = 8 and such.
	int myAlive; // Is the piece alive/visible. 
	//Pointer to mesh?
     
public:
	Piece(unsigned int x, unsigned int y, Color color) : myX(x), myY(y), myColor(color) 
	{ /* Draw peice */ }
	  
	/* Setters and Getters */
	int getX() const { return myX; }
	int getY() const { return myY; }
	//void getPos(int &x, int &y) const { x = myX; y = myY; }
	void setX(const int x) { /* Check if x is in bounds. */ myX = x; } /* Throw an error? */
	void setY(const int y) { /* Check if x is in bounds. */ myY = y; }
	void setPos(const int x, const int y) { /* Check range bounds */ myX = x; myX = y; }
	int getColor() const { return myColor; }
	  
	virtual vector<Move> availableMoves() = 0; /* Checks current location, and figures out what moves it could make if nothing else was on board */	  
	virtual void draw() = 0;
};
