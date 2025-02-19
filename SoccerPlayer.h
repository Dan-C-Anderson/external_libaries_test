//
// Created by daniel anderson on 2/19/25.
//

#ifndef SOCCERPLAYER_H
#define SOCCERPLAYER_H

#include "Person.h"


class SoccerPlayer : public Person{
private:
    int score; //keeps track of the player's current score

public:
    //constructor
    SoccerPlayer(std::string name, int age, int score = 0);

    //getter and setter for score
    int getScore();
    void setScore(int _score);

    //increment score +1;
    void addGoal();

    //Override toString method specifically for SoccerPlayer
    std::string toString();
};



#endif //SOCCERPLAYER_H
