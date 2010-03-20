/****************************************************************************************
* File: board.h                                                                         *
* Authors: Stuart Larsen(SCL), Carl Vitula (CEV)                                        *
* Description:                                                                          *
* 	Board is a member of class Game. It controls all the pieces on the board. If    *
*	the user trys to move a piece Board handles the actual changing of positioning  *
* 	of the piece. It also knows all possible moves for the piece.                   *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
* 19Mar10 CEV	Changed Piece vectors.                                                  *
* 20Mar10 SCL	Cleaned up class.                                                       * 
****************************************************************************************/
class Board
{

	vector<Piece> myWhitePieces(16); //Vectors should be fine, since we don't have to add anything and will have to index a lot.
     	vector<Piece> myBlackPieces(16); //I'm in favor of splitting it up though.
     
     	/* Will make all the pieces and add them into the vectors */
	void initiateBoard();

public:
	Board() {/* Set up and draw board, add pieces */}
	  
	void drawBoard();
	Piece& getPiece(int x, int y);
	Piece& getPiece(Move move);
	void movePiece(Move move);
	void drawAll() { for_each(myPieces.begin(), myPieces.end(), mem_fun(&Piece::draw));
	void promotePiece();
	vector<Move> avalibleMoves() { /* Takes possible moves from Piece::possibleMoves(), and figures out with ones are avalible, no other piece there, or if it would cause reveal check */ }
};
