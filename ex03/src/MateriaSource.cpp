/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:25:35 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 16:58:29 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/MateriaSource.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

MateriaSource::MateriaSource() {
    for (size_t i = 0; i < 4; i++) Materia[i] = NULL;
    cout << "Default Constructor Worked (MateriaSource)" << endl;
}

MateriaSource::MateriaSource(const MateriaSource& oth) {
    *this = oth;
    cout << "Copy Constructor Worked (MateriaSource)" << endl;
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
    cout << "Copy Assignment Operator Worked (MateriaSource)" << endl;
}

MateriaSource::~MateriaSource() {
    for (size_t i = 0; i < 4; i++)
        if (Materia[i]) delete Materia[i];
}

/* ************************* [^] ORTHODOX FORM [^] ************************* */