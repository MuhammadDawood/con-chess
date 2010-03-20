/****************************************************************************************
* File: game.h                                                                         *
* Authors: Stuart Larsen(SCL)                                                           *
* Description:                                                                          *
* 	Each individual game will be it's own object. It'll handle the players, board,  *
*	and all major interactiong pretaining to them.                                  *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
****************************************************************************************/
enum Turn { BLACKTURN, WHITETURN };

class Game
{
	Board *board;
	Player player1, player2;
	Timer timer1, timer2;
	Move *moves;
	
public:
	Game(Player one, Player two) : player1(one), player2(two)
	{ /* Initialize board with all the pieces. Allocate some memory for moves */ }

	int loadGameFromFile(string fileName);
	int saveGame(string fileName);
	
	/* It'll have the game loop where it ask each player for their move, and then sends the stuff to board */
	void playGame();
	void addMove(Move move);
}
