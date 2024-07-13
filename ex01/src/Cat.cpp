/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:11 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 15:04:16 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Cat.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Cat::Cat() {
    try {
        setType("Cat");
        brain = new Brain;
        cout << "Default Constructor Worked (Cat)" << endl;
    } catch (exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Cat::Cat(const string idea) {
    try {
        setType("Cat");
        brain = new Brain(idea);
        cout << "Constructor Worked (Cat)" << endl;
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Cat::Cat(const Cat &oth) {
    try {
        setType("Cat");
        brain = new Brain(oth.getBrain());
        cout << "Constructor Worked (Cat)" << endl;
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    cout << "Copy Constructor Worked (Cat)" << endl;
}

Cat &Cat::operator=(const Cat &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    brain = oth.brain;
    cout << "Copy Assignment Operator Worked (Cat)" << endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    cout << "Destructor Worked (Cat)" << endl;
};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ********************** [v] GET & SET FUNCTIONS [v] ********************** */

void Cat::setBrain(const string idea) {
    try {
        delete brain;
        brain = new Brain(idea);
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

void Cat::setBrain(const Brain &oth) {
    try {
        delete brain;
        brain = new Brain(oth);
    } catch (const exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
}

Brain &Cat::getBrain() const { return *this->brain; };

/* ********************** [^] GET & SET FUNCTIONS [^] ********************** */

/* ************************* [v] CAT MAKE SOUND [v] ************************* */

void Cat::makeSound() const {
    cout << WHITE << "Cat Making Sound: " << YELLOW << "Meow" << RESET << endl;
}

/* ************************* [^] CAT MAKE SOUND [^] ************************* */

/* **************************** [v] DISPLAY [v] **************************** */

void Cat::display() const {
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