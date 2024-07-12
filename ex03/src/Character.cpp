/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 15:17:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Character.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] Orthodox Form [v] ************************* */

Character::Character() {
    setName("");
    for (size_t i = 0; i < 4; i++) {
        inv[i] = NULL;
    }
    cout << "Default Constructor Worked (Character)" << endl;
}

Character::Character(const string _name) : name(_name) {
    for (size_t i = 0; i < 4; i++) {
        inv[i] = NULL;
    }
    cout << "Constructor Worked (Character)" << endl;
}

Character::Character(const Character& oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Character)" << endl;
}

Character& Character::operator=(const Character& oth) {
    if (this == &oth) return *this;
    name = oth.name;
    for (size_t i = 0; i < 4; i++)
        if (inv[i]) {
            delete inv[i];
            inv[i] = NULL;
        }
    for (size_t i = 0; i < 4; i++)
        if (inv[i] == NULL || !inv[i]) {
            this->inv[i] = oth.inv[i]->clone();
        }
    cout << "Copy Assignment Operator Worked (Character)" << endl;
    return *this;
}

Character::~Character() {
    for (size_t i = 0; i < 4; i++)
        if (inv[i]) delete inv[i];
    cout << "Destructor Worked (Character)" << endl;
}

/* ************************* [^] Orthodox Form [^] ************************* */

/* ********************** [v] GET & SET FUNCTIONS [v] ********************** */

string const& Character::getName() const { return name; };
void Character::setName(const string _name) { name = _name; };

/* ********************** [^] GET & SET FUNCTIONS [^] ********************** */

/* *************************** [v] FUNCTIONS [v] *************************** */

/* ***************************** [v] EQUIP [v] ***************************** */

void Character::equip(AMateria* m) {
    if (m == NULL || !m) return;

    for (int i = 0; i < 4; i++)
        if (inv[i] == NULL || !inv[i]) {
            inv[i] = m;
            break;
        }
}

/* ***************************** [^] EQUIP [^] ***************************** */

/* **************************** [v] UNEQUIP [v] **************************** */

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4) {
        cout << "Wrong Index" << endl;
        return;
    }
    inv[idx] = NULL;
}

/* **************************** [^] UNEQUIP [^] **************************** */

/* ****************************** [v] USE [v] ****************************** */

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4) {
        cout << "Wrong Index" << endl;
        return;
    }
    if (inv[idx] != NULL && inv[idx]) {
        inv[idx]->use(target);
    }
}

/* ****************************** [^] USE [^] ****************************** */

/* *************************** [^] FUNCTIONS [^] *************************** */