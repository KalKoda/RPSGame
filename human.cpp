#include "human.h"
#include <iostream>
using namespace std;

Human::Human(){
	std::string name = "playerName";
    int choice = 0;
}

int Human::getChoice(){
	return choice;
}

void Human::setChoice(int num){
	this->choice = num;
}

void Human::ask_move(){
    int decision;
	cout << "Please type 1 for Rock, 2 for Paper, and 3 for Scissors" << endl;
	cin >> decision;
	setChoice(decision);
}

