/****************************************************************************************
* File: board.h                                                                         *
* Authors: Stuart Larsen(SCL)                                                           *
* Description:                                                                          *
* 	Board is a member of class Game. It controls all the pieces on the board. If    *
*	the user trys to move a piece Board handles the actual changing of positioning  *
* 	of the piece. It also knows all possible moves for the piece.                   *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
****************************************************************************************/
class Board
{
     vector<piece> myPieces(32); /* Or a list? */ /* Or split into two vectors */
     void initiate(); /* Set up stuff */
     Moves *moves;
     
     public:
	  Board() {/* Set up and draw board, add pieces */}
	  
	  drawBoard();
	  getPiece(int x, int y);
	  move();
	  void drawAll() { for_each(myPieces.begin(), myPieces.end(), mem_fun(&Piece::draw));
	  void promotePiece()
	  /* vector<Pair<int, int>>? */ avalibleMoves() { /* Takes possible moves from Piece::possibleMoves(), and figures out with ones are avalible, no other piece there, or if it would cause reveal check */ }
};
