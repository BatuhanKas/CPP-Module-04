/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:42 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 14:29:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Animal.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Animal::Animal() {
    setType("Animal");
    cout << "Default Constructor Worked (Animal)" << endl;
}

Animal::Animal(const Animal &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Animal)" << endl;
}

Animal &Animal::operator=(const Animal &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (Animal)" << endl;
    return *this;
}

Animal::~Animal() { cout << "Destructor Worked (Animal)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] GET & SET TYPE [v] ************************* */

string Animal::getType() const { return type; };

void Animal::setType(const string _type) { type = _type; };

/* ************************* [^] GET & SET TYPE [^] ************************* */

/* *********************** [v] ANIMAL MAKE SOUND [v] *********************** */

void Animal::makeSound() const {
    cout << YELLOW << "Animal don't have a sound!" << RESET << endl;
};

/* *********************** [^] ANIMAL MAKE SOUND [^] *********************** */

/* **************************** [v] WHOAMI [v] **************************** */

void Animal::whoAmI() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My's type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] WHOAMI [^] **************************** */
