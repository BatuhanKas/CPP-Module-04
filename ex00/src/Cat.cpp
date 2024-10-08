/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:11 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:45:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Cat.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Cat::Cat() {
    setType("Cat");
    cout << "Default Constructor Worked (Cat)" << endl;
}

Cat::Cat(const Cat &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Cat)" << endl;
}

Cat &Cat::operator=(const Cat &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (Cat)" << endl;
    return *this;
}

Cat::~Cat() { cout << "Destructor Worked (Cat)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] CAT MAKE SOUND [v] ************************* */

void Cat::makeSound() const {
    cout << WHITE << "Cat Making Sound: " << YELLOW << "Meow" << RESET << endl;
}

/* ************************* [^] CAT MAKE SOUND [^] ************************* */

/* **************************** [v] DISPLAY [v] **************************** */

void Cat::display() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */