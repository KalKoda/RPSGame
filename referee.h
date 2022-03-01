#pragma once
#include <string>
#include <iostream>

class Referee{
	private:
	    int HumanMove;
	    int RobotMove;
		//int winNumber;
		std::string winnerName;


	public:
	    Referee();
	    void setHumanMove(int Hmove);
	    void setRobotMove(int Rmove);
	    int getHumanMove();
	    int getRobotMove();

	    void check_winner();

		std::string getWinner();



};