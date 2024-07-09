/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:11 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:48:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/WrongCat.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

WrongCat::WrongCat() {
    setType("WrongCat");
    cout << "Default Constructor Worked (WrongCat)" << endl;
}

WrongCat::WrongCat(const WrongCat &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (WrongCat)" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (WrongCat)" << endl;
    return *this;
}

WrongCat::~WrongCat() { cout << "Destructor Worked (WrongCat)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] CAT MAKE SOUND [v] ************************* */

void WrongCat::makeSound() const {
    cout << WHITE << "WrongCat Making Sound: " << YELLOW << "Meow" << RESET
         << endl;
}

/* ************************* [^] CAT MAKE SOUND [^] ************************* */

/* **************************** [v] DISPLAY [v] **************************** */

void WrongCat::display() const {
    cout << "---------------------------" << endl;
    cout << WHITE << "My's type is: " << BLUE << getType() << RESET << endl;
    makeSound();
    cout << "---------------------------" << endl;
}

/* **************************** [^] DISPLAY [^] **************************** */