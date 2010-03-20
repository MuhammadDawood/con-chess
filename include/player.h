/****************************************************************************************
* File: player.h                                                                        *
* Authors: Stuart Larsen(SCL)                                                           *
* Description:                                                                          *
* 	Each player in the game will be made an object of class Player. This class will *
*	be derived into three other class AI, Human, and Network. It will handle things *
*	such as getting the moves from the player to holding information about who the  *
&	player is.                                                                      *
*                                                                                       *      
* Major Modifications                                                                   *
* 19Mar10 SCL	Intial Coding.                                                          *
* 20Mar10 SCL	cleaned up class.                                                       *
****************************************************************************************/

class Player
{
	std::string myName;
	int myRating;
	int myColor;
	int myRating;
	
public:
	Player(string n) : name(n);
	
	virtual Move getMove() = 0;
	std::string getName const ( return myName; )
	int getRating const ( return myRating; )
	int getColor const ( return myColor; )
};
