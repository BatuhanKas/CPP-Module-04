/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:11 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 15:35:50 by bkas             ###   ########.fr       */
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

Cat::~Cat() {
    delete brain;
    cout << "Destructor Worked (Cat)" << endl;
};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] CAT MAKE SOUND [v] ************************* */

void Cat::makeSound() const {
    cout << WHITE << "Cat Making Sound: " << YELLOW << "Meow" << RESET << endl;
}

/* ************************* [^] CAT MAKE SOUND [^] ************************* */

/* ***************************** [v] WHOAMI [v] ***************************** */

void Cat::whoAmI() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My's type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* ***************************** [^] WHOAMI [^] ***************************** */