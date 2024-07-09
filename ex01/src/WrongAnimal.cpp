/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:42 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:48:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/WrongAnimal.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

WrongAnimal::WrongAnimal() {
    setType("WrongAnimal");
    cout << "Default Constructor Worked (WrongAnimal)" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (WrongAnimal)" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (WrongAnimal)" << endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    cout << "Destructor Worked (WrongAnimal)" << endl;
};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] GET & SET TYPE [v] ************************* */

string WrongAnimal::getType() const { return type; };

void WrongAnimal::setType(const string _type) { type = _type; };

/* ************************* [^] GET & SET TYPE [^] ************************* */

/* *********************** [v] ANIMAL MAKE SOUND [v] *********************** */

void WrongAnimal::makeSound() const {
    cout << YELLOW << "WrongAnimal don't have a sound!" << RESET << endl;
};

/* *********************** [^] ANIMAL MAKE SOUND [^] *********************** */

/* **************************** [v] DISPLAY [v] **************************** */

void WrongAnimal::display() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My's type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */
