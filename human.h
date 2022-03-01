#pragma once

#include <string>

class Human{
	private:
		int choice;
		std::string name;

	public:
		Human();
		void ask_move();
		int getChoice();
		void setChoice(int num);

};