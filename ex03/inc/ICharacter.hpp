/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 16:51:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "AMateria.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] DOG CLASS [v] *************************** */

class ICharacter : public AMateria {
   public:
    /* **** [v] Orthodox Form [v] **** */
    virtual ~ICharacter(){};
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    virtual string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] DOG CLASS [^] *************************** */

#endif