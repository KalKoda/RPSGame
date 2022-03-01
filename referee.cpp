#include "referee.h"
#include <iostream>
using namespace std;

Referee::Referee(){
    //int HumanMove = 0;
    //int RobotMove =1 ;
	std::string winnerName = "Neither, it's a tie";
    //int winnerName = 4;
}

void Referee::setHumanMove(int Hmove){
    this->HumanMove = Hmove;
}
void Referee::setRobotMove(int Rmove){
    this->RobotMove = Rmove;
}
int Referee::getHumanMove(){
    return HumanMove;
}
int Referee::getRobotMove(){
    return RobotMove;
}



void Referee::check_winner(){ //Gotta make this follow the rules
    if (HumanMove > RobotMove){
        this->winnerName = "Human";

    }
    if (HumanMove < RobotMove){
        this->winnerName = "Robot";

    }
    if (HumanMove == RobotMove){
        this->winnerName = "no one, its a draw";
    }
}




std::string Referee::getWinner(){
    return winnerName;
}
