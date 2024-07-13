/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 12:30:47 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Ice::Ice() {
    setType("ice");
}

Ice::Ice(const string _type) {
    setType(_type);
}

Ice::Ice(const Ice &oth) {
    *this = oth;
}

Ice &Ice::operator=(const Ice &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    return *this;
}

Ice::~Ice() {};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ***************************** [v] CLONE [v] ***************************** */

AMateria *Ice::clone() const {
    /* ***** [v] Memory Allocation [v] ***** */
    try {
        AMateria *ptr = new Ice(*this);
        return ptr;
    } catch (exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    /* ***** [^] Memory Allocation [^] ***** */
    return 0;
}

/* ***************************** [^] CLONE [^] ***************************** */

/* ****************************** [v] USE [v] ****************************** */

void Ice::use(ICharacter &target) {
    cout << WHITE << "-----------------------------" << RESET << endl;
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
    cout << WHITE << "-----------------------------" << RESET << endl;
};

/* ****************************** [^] USE [^] ****************************** */