/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:10 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 12:29:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Cure.hpp"

#include "../inc/ICharacter.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Cure::Cure() { setType("cure"); }

Cure::Cure(const string _type) { setType(_type); }

Cure::Cure(const Cure &oth) { *this = oth; }

Cure &Cure::operator=(const Cure &oth) {
    if (this == &oth) return *this;
    type = oth.type;
    return *this;
}

Cure::~Cure(){};

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
    return 0;
}

/* ***************************** [^] CLONE [^] ***************************** */

/* ****************************** [v] USE [v] ****************************** */

void Cure::use(ICharacter &target) {
    cout << WHITE << "----------------------" << RESET << endl;
    cout << GREEN << "* heals " << target.getName() << "\'s wounds *" << RESET << endl;
    cout << WHITE << "----------------------" << RESET << endl;
}

/* ****************************** [^] USE [^] ****************************** */