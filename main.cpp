#include "Person.h"
#include "SoccerPlayer.h"
#include "functions.h"
#include <iostream>
#include <string>

int main() {

    //create a new person on the stack
    Person paul("Paul",10);

    //output the person's info
    std::cout << "Hello, World!, my name is: " << paul.getName() << std::endl;
    std::cout <<"\n"<< paul.toString() << std::endl;

    //create a new person on the heap
    Person* personPtr = new Person("ImGonnaDie",99);

    //output the person's data
    std::cout << "original: " << personPtr->toString() << std::endl;

    //update the age
    personPtr->setAge(100);

    //output the person's data again
    std::cout << "\nnew: " << personPtr->toString() << std::endl;

    //free up the memory again
    delete personPtr;

    //test of the SoccerPlayer class
    SoccerPlayer* Messi = new SoccerPlayer("Messi",30,0);

    //print out Messi's data to the terminal
    std::cout << "\noriginal: " << Messi->toString() << std::endl;

    //now we will add to the score
    Messi->addGoal();

    //now we will print Messi's data to the terminal again
    std::cout << "\nnew: " << Messi->toString() << std::endl;

    //now we delete Messi to free up memory on the Heap
    delete Messi;

    //testing the function
    int number = 2;
    int answer;

    answer = square_number(number);
    std::cout << "\nnumber: " << number << "\nanswer: "
    << answer << ", add one: " << add_one(answer) << std::endl;

    return 0;


}

