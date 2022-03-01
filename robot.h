#pragma once

class Robot{
    private:
        int choice;
    public:
        Robot();

        void setRobChoice(int num);
        int getRobChoice();

        void RandomMove();
};