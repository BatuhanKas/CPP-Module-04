/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:42 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 11:57:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/AAnimal.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

AAnimal::AAnimal() {
    setType("AAnimal");
    cout << "Default Constructor Worked (AAnimal)" << endl;
}

AAnimal::AAnimal(const AAnimal &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (AAnimal)" << endl;
}

AAnimal &AAnimal::operator=(const AAnimal &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (AAnimal)" << endl;
    return *this;
}

AAnimal::~AAnimal() { cout << "Destructor Worked (AAnimal)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] GET & SET TYPE [v] ************************* */

string AAnimal::getType() const { return type; };

void AAnimal::setType(const string _type) { type = _type; };

/* ************************* [^] GET & SET TYPE [^] ************************* */

/* *********************** [v] AANIMAL MAKE SOUND [v] *********************** */

void AAnimal::makeSound() const {
    cout << YELLOW << "AAnimal don't have a sound!" << RESET << endl;
};

/* *********************** [^] ANIMAL MAKE SOUND [^] *********************** */

/* **************************** [v] DISPLAY [v] **************************** */

void AAnimal::display() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My's type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */
