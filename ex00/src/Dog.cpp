/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:45:46 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Dog.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Dog::Dog() {
    setType("Dog");
    cout << "Default Constructor Worked (Dog)" << endl;
}

Dog::Dog(const Dog &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Dog)" << endl;
}

Dog &Dog::operator=(const Dog &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (Dog)" << endl;
    return *this;
}

Dog::~Dog() { cout << "Destructor Worked (Dog)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************ [v] DOG MAKE SOUND [v] ************************ */

void Dog::makeSound() const {
    cout << WHITE << "Dog Making Sound: " << YELLOW << "Woof Woof" << RESET
         << endl;
}

/* ************************ [^] DOG MAKE SOUND [^] ************************ */

/* **************************** [v] DISPLAY [v] **************************** */

void Dog::display() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */