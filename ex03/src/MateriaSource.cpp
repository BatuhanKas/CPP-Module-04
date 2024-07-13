/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:25:35 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 12:26:23 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/MateriaSource.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

MateriaSource::MateriaSource() {
    for (size_t i = 0; i < 4; i++) Materia[i] = NULL;
    setNumLearned(0);
}

MateriaSource::MateriaSource(const MateriaSource& oth) {
    *this = oth;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& oth) {
    if (this == &oth) return *this;
    for (size_t i = 0; i < 4; i++) {
        delete Materia[i];
        Materia[i] = NULL;
    }
    for (size_t i = 0; i < 4; i++) {
        Materia[i] = oth.Materia[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (size_t i = 0; i < 4; i++)
        if (Materia[i]) delete Materia[i];
}

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ********************** [v] SET & GET FUNCTIONS [v] ********************** */

void MateriaSource::setNumLearned(const int num) { numLearned = num; };
int MateriaSource::getNumLearned() const { return this->numLearned; };

/* ********************** [^] SET & GET FUNCTIONS [^] ********************** */

/* ************************* [v] LEARN MATERIA [v] ************************* */

void MateriaSource::learnMateria(AMateria* ptr) {
    if (getNumLearned() < 4) {
        Materia[getNumLearned()] = ptr;
        setNumLearned(getNumLearned() + 1);
        return;
    }
    delete ptr;
}

/* ************************* [^] LEARN MATERIA [^] ************************* */

/* ************************* [v] CREATE MATERIA [v] ************************* */

AMateria* MateriaSource::createMateria(string const& type) {
    if (type == "") return 0;

    for (int i = 0; i < getNumLearned(); i++) {
        if (Materia[i]->getType() == type) {
            return Materia[i]->clone();
        }
    }
    return 0;
}

/* ************************* [^] CREATE MATERIA [^] ************************* */