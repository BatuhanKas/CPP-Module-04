/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 19:16:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Ice::Ice() {
    setType("ice");
    cout << "Default Constructor Worked (ice)" << endl;
}

Ice::Ice(const string _type) {
    setType(_type);
    cout << "Constructor Worked (ice)" << endl;
}

Ice::Ice(const Ice &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (ice)" << endl;
}

Ice &Ice::operator=(const Ice &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    cout << "Copy Assignment Operator Worked (Ice)" << endl;
    return *this;
}

Ice::~Ice() { cout << "Destructor Worked (Ice)" << endl; };

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
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
};

/* ****************************** [^] USE [^] ****************************** */