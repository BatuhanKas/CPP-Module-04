/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 15:09:39 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Cure.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Cure::Cure() {
    setType("cure");
    cout << "Default Constructor Worked (Cure)" << endl;
}

Cure::Cure(const string _type) {
    setType(_type);
    cout << "Constructor Worked (Cure)" << endl;
}

Cure::Cure(const Cure &oth) {
    setType("cure");
    cout << "Constructor Worked (Cure)" << endl;
}

Cure &Cure::operator=(const Cure &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    cout << "Copy Assignment Operator Worked (Cure)" << endl;
    return *this;
}

Cure::~Cure() { cout << "Destructor Worked (Cure)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ***************************** [v] CLONE [v] ***************************** */

AMateria *Cure::clone() const {
    /* ***** [v] Memory Allocation [v] ***** */
    try {
        AMateria *ptr = new Cure(*this);
        return ptr;
    } catch (exception &e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    /* ***** [^] Memory Allocation [^] ***** */
}

/* ***************************** [^] CLONE [^] ***************************** */

/* ****************************** [v] USE [v] ****************************** */

void Cure::use(ICharacter &target) {
    cout << "* heals " << target.getName() << "\'s wounds *" << endl;
}

/* ****************************** [^] USE [^] ****************************** */