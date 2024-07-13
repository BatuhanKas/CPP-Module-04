/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:03:41 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 15:26:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>

#include "AMateria.hpp"

using std::cout;
using std::endl;
using std::string;

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] INTERFACE [v] *************************** */

class IMateriaSource {
   public:
    virtual ~IMateriaSource(){};
    /* ******* [v] Functions [v] ******* */
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(string const& type) = 0;
    /* ******* [^] Functions [^] ******* */
};

/* *************************** [^] INTERFACE [^] *************************** */

#endif