/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:42 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 16:07:46 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/AMateria.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

AMateria::AMateria() {
    setType("AMateria");
    cout << "Default Constructor Worked (AMateria)" << endl;
}

AMateria::AMateria(string const &type) : type(this->type) {
    cout << "Constructor Worked (AMateria)" << endl;
}

AMateria::AMateria(const AMateria &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (AMateria)" << endl;
}

AMateria &AMateria::operator=(const AMateria &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    cout << "Copy Assignment Operator Worked (AMateria)" << endl;
    return *this;
}

AMateria::~AMateria() { cout << "Destructor Worked (AMateria)" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] GET & SET TYPE [v] ************************* */

void AMateria::setType(const string _type) { type = _type; };

string const &AMateria::getType() const { return type; };

/* ************************* [^] GET & SET TYPE [^] ************************* */
