#pragma once
#include <string>
#include <iostream>
#include <string>

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

		std::string determineMove(int num);

	    void check_winner();

		std::string getWinner();



};