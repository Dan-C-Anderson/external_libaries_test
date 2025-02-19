//
// Created by daniel anderson on 2/19/25.
//

#include "SoccerPlayer.h"
#include <iostream>

//Constructor calls base constructor and initializes score
SoccerPlayer::SoccerPlayer(std::string _name, int _age, int _score)
    :Person(_name,_age),score(_score) {

}

//getter for score
int SoccerPlayer::getScore() {
    return score;
}

//setter for score
void SoccerPlayer::setScore(int _score) {
    score = _score;
}

//increment score
void SoccerPlayer::addGoal() {
    //add to the score
    score++;

    //celebration message
    std::cout << Person::getName() << " has scored!, new score count is: " << score << "\n" << std::endl;
}

//override toString to include the score also
std::string SoccerPlayer::toString() {
    return Person::toString() + ", score: " + std::to_string(score);
}
