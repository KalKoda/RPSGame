#include <time.h>
#include "robot.h"
using namespace std;
#include <iostream>

Robot::Robot(){
    //int choice = 0;
}

void Robot::setRobChoice(int num){
    this->choice = num;
}

int Robot::getRobChoice(){
    return choice;
}


void Robot::RandomMove(){
    srand(time(NULL));
    int number = (rand() % 3)+1;
    setRobChoice(number);
}




