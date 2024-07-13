/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:42 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 12:26:30 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/AMateria.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

AMateria::AMateria() { setType("AMateria"); }

AMateria::AMateria(string const &type) { setType(type); }

AMateria::AMateria(const AMateria &oth) { *this = oth; }

AMateria &AMateria::operator=(const AMateria &oth) {
    if (this == &oth) return *this;
    setType(oth.getType());
    return *this;
}

AMateria::~AMateria(){};

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************* [v] GET & SET TYPE [v] ************************* */

void AMateria::setType(const string _type) { type = _type; };
string const &AMateria::getType() const { return type; };

/* ************************* [^] GET & SET TYPE [^] ************************* */

/* ****************************** [v] USE [v] ****************************** */

void AMateria::use(ICharacter &target) { (void)target; };

/* ****************************** [^] USE [^] ****************************** */