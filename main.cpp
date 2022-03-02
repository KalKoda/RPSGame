#include "human.h"
#include "robot.h"
#include "referee.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

    Human player1;
    Robot Robot1;
    Referee RPCRef;




    player1.ask_move(); //takes human's input
    //cout << player1.getChoice() << endl;
    RPCRef.setHumanMove(player1.getChoice());

    Robot1.RandomMove(); //generates random number between 1-3
    RPCRef.setRobotMove(Robot1.getRobChoice());


    cout << "human move is... " << RPCRef.determineMove(RPCRef.getHumanMove()) << endl;
    cout << "and robot move is... " << RPCRef.determineMove(RPCRef.getRobotMove()) << endl;

    RPCRef.check_winner();
    cout << "the winner is... " << RPCRef.getWinner() << "!!! \n";





    return 0;
}