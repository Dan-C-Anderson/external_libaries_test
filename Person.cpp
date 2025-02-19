//
// Created by daniel anderson on 2/19/25.
//

#include "Person.h"


    Person::Person(std::string _name, int _age) {
        //constructor for the person class
        name = _name;
        age = _age;
    }
    Person::~Person() {
        //destructor for the person class
        std::cout << "Person deleted: " << name << std::endl;
    }

    void Person::setName(std::string _name) {
        //changes the name of the Person
        name = _name;
    }
    void Person::setAge(int _age) {
        //changes the age of the Person
        age = _age;
    }
    int Person::getAge() {
        return age;
    }
    std::string Person::getName() {
        return name;
    }
    std::string Person::toString() {
        //returns the Person's info as a string
        return "Name: " + name + "\nAge: " + std::to_string(age);
    }