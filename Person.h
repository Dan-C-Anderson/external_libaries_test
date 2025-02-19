//
// Created by daniel anderson on 2/19/25.
//

#ifndef PERSON_H
#define PERSON_H

//include libraries needed
#include <iostream>
#include <string>

//forward declaration of Person class (not full implementation)
class Person {

private:
    std::string name;
    int age;
public:
    //constructor
    Person(std::string name, int age);

    //destructor
    ~Person();

    //setters
    void setName(std::string _name);
    void setAge(int _age);

    //getters
    std::string getName();
    int getAge();
    std::string toString();

};


#endif //PERSON_H
