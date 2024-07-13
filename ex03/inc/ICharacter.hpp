/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 15:26:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "AMateria.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] INTERFACE [v] *************************** */

class ICharacter {
   public:
    virtual ~ICharacter(){};
    /* ****** [v] Functions [v] ****** */
    virtual std::string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] INTERFACE [^] *************************** */

#endif