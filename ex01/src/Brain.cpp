/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:56:17 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 19:57:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Brain.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

Brain::Brain() {
    setIdea("");
    cout << "Default Constructor Worked (Brain)" << endl;
}

Brain::Brain(string idea) {
    for (size_t i = 0; i < 100; i++) {
        ideas[i] = idea;
    }
    cout << "Constructor Worked (Brain)" << endl;
}

Brain::Brain(const Brain &oth) {
    *this = oth;
    cout << "Copy Constructor Worked (Brain)" << endl;
}

Brain &Brain::operator=(const Brain &oth) {
    if (this == &oth) return *this;
    setIdea(oth.getIdea());
    cout << "Copy Assignment Operator Worked (Brain)" << endl;
    return *this;
}

Brain::~Brain() { cout << "Destructor Worked (Brain)" << endl; }

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ************************ [v] GET & SET IDEA [v] ************************ */

void Brain::setIdea(const string _idea) {
    for (size_t i = 0; i < 100; i++) {
        ideas[i] = _idea;
    }
}

string Brain::getIdea() const { return ideas[0]; }

/* ************************ [^] GET & SET IDEA [^] ************************ */