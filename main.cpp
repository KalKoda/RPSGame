#include "human.h"
//#include "robot.h"
#include "referee.h"
#include <iostream>
using namespace std;

/*QUESTIONS FOR PRAC!!!!!!
1. Help with making Makefile work properly
2. is there a better way to setup win lose options than manually organising all options
3. Best way to setup random number generator for Computer
4. SHould I be using CS50 if not, what should I be using
5. how to submit to gitfolder using cs50?
*/


int main(){

    Human player1;
	//Robot Robot1(3);
	Referee RPCRef;




    player1.ask_move();
    cout << player1.getChoice() << endl; //takes humans input
    RPCRef.setHumanMove(player1.getChoice());

    RPCRef.setRobotMove(1);

    cout << "human move is..." << RPCRef.getHumanMove() << endl;
    cout << "and robot move is..." << RPCRef.getRobotMove() << endl;

    RPCRef.check_winner();
    cout << "the winner is... " << RPCRef.getWinner() << "!!! \n";





	return 0;
}