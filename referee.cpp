#include "referee.h"
#include <iostream>
using namespace std;
#include <string>

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

std::string Referee::determineMove(int num){
    if (num == 1){
        return "rock";
    }
    if (num==2){
        return "paper";
    }
    if (num == 3){
        return "scissors";
    }
    else {
        return "wrong input try again";
    }
}



void Referee::check_winner(){ //Gotta make this follow the rules
    if (HumanMove == 1 && RobotMove ==3 || HumanMove == 2 && RobotMove ==1 || HumanMove == 3 && RobotMove ==2 ){
        this->winnerName = "Human";

    }
    if (HumanMove == 3 && RobotMove ==1 || HumanMove == 1 && RobotMove ==2 || HumanMove == 2 && RobotMove ==3){
        this->winnerName = "Robot";
    }
    if (HumanMove == RobotMove){
        this->winnerName = "no one, its a draw";
    }
}




std::string Referee::getWinner(){
    return winnerName;
}
