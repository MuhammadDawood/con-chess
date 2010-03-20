/****************************************************************************************
* File: game.h                                                                          *
* Authors: Stuart Larsen(SCL), Carl Vitula(CEV)                                         *
* Description:                                                                          *
* 	Each individual game will be it's own object. It'll handle the players, board,  *
*	and all major interactions pertaining to them.                                  *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
* 19Mar10 CEV	Timer work.                                                             *
* 20Mar10 SCL	Cleaned up class.                                                       *
****************************************************************************************/
enum Turn { BLACKTURN, WHITETURN };

class Game
{
	Board board;
	Player player1, player2;
	Timer timer1, timer2; //Shouldn't timer be a member of player?
	vector<Move> moves;
	
public:
	Game(Player one, Player two) : player1(one), player2(two)
	{  }

	int loadGameFromFile(string fileName);
	int saveGame(string fileName);
	
	/* It'll have the game loop where it ask each player for their move, and then sends the stuff to board */
	void playGame();
	
	/* Adds move to the moves vector */
	void addMove(Move move);
}
