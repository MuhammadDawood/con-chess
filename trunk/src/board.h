/****************************************************************************************
* File: board.h                                                                         *
* Author: Stuart Larsen                                                                 *
* Description:                                                                          *
*	Manages all the pieces for the game. 					       	*
*                                                                                       *       
****************************************************************************************/
class Board
{
     vector<piece> myPieces(64); /* Or a list? */
     int myTurn; // who's turn is it? White or Black?
     void initiate(); /* Set up stuff */
     string player1, player2; //Names, for displaying purposes.
     
     public:
	  Board() {/* Set up and draw board, add pieces */}
	  
	  drawBoard();
	  getPiece(int x, int y);
	  move();
	  void drawAll() { for_each(myPieces.begin(), myPieces.end(), mem_fun(&Piece::draw));
	  void promotePiece()
	  /* vector<Pair<int, int>>? */ avalibleMoves() { /* Takes possible moves from Piece::possibleMoves(), and figures out with ones are avalible, no other piece there, or if it would cause reveal check */ }
};