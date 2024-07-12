/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 12:17:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Character.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] Orthodox Form [v] ************************* */

Character::Character() {
    setName("");
    cout << "Default Constructor Worked (Character)" << endl;
}

Character::Character(const string _name) : name(_name) {
    cout << "Constructor Worked (Character)" << endl;
}

Character::Character(const Character& oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Character)" << endl;
}

Character& Character::operator=(const Character& oth) {
    if (this == &oth) return *this;
    setName(oth.getName());
    cout << "Copy Assignment Operator Worked (Character)" << endl;
    return *this;
}

Character::~Character() { cout << "Destructor Worked (Character)" << endl; }

/* ************************* [^] Orthodox Form [^] ************************* */

/* ********************** [v] GET & SET FUNCTIONS [v] ********************** */

string const& Character::getName() const { return name; };
void Character::setName(const string _name) { name = _name; };

/* ********************** [^] GET & SET FUNCTIONS [^] ********************** */

/* *************************** [v] FUNCTIONS [v] *************************** */

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (inv[i] == NULL && !inv[i]) {
            inv[i] = m;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4) {
        cout << "Wrong Index" << endl;
        return;
    }
    inv[idx] = NULL;
    cout << "Materia Unequipped" << endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4) {
        cout << "Wrong Index" << endl;
        return;
    }
    if (inv[idx] != NULL && inv[idx]) {
        cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
        AMateria::use(target);
    }
}

/* *************************** [^] FUNCTIONS [^] *************************** */