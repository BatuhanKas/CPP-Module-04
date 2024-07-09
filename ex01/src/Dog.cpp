/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:48:12 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Dog.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Dog::Dog() {
    try {
        setType("Dog");
        brain = new Brain;
        cout << "Default Constructor Worked (Dog)" << endl;
    } catch (exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Dog::Dog(const string idea) {
    try {
        setType("Dog");
        brain = new Brain(idea);
        cout << "Constructor Worked (Dog)" << endl;
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Dog::Dog(const Dog &oth) {
    try {
        setType("Dog");
        brain = new Brain(oth.getBrain());
        cout << "Constructor Worked (Dog)" << endl;
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    cout << "Copy Constructor Worked (Dog)" << endl;
}

Dog &Dog::operator=(const Dog &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    brain = oth.brain;
    cout << "Copy Assignment Operator Worked (Dog)" << endl;
    return *this;
}

Dog::~Dog() {
    delete brain;
    cout << "Destructor Worked (Dog)" << endl;
};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ********************** [v] GET & SET FUNCTIONS [v] ********************** */

void Dog::setBrain(const string idea) {
    try {
        delete brain;
        brain = new Brain(idea);
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

void Dog::setBrain(const Brain &oth) {
    try {
        delete brain;
        brain = new Brain(oth);
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Brain &Dog::getBrain() const { return *this->brain; };

/* ********************** [^] GET & SET FUNCTIONS [^] ********************** */

/* ************************ [v] DOG MAKE SOUND [v] ************************ */

void Dog::makeSound() const {
    cout << WHITE << "Dog Making Sound: " << YELLOW << "Woof Woof" << RESET
         << endl;
}

/* ************************ [^] DOG MAKE SOUND [^] ************************ */

/* **************************** [v] DISPLAY [v] **************************** */

void Dog::display() const {
    string idea = getBrain().getIdea();

    cout << "---------------------------" << endl;
    cout << WHITE << "My type is: " << BLUE << getType() << RESET << endl;
    if (idea != "") {
        cout << WHITE << "My idea is: " << BLUE << idea << RESET << endl;
    } else {
        cout << WHITE << "I have no idea :(" << RESET << endl;
    }
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */