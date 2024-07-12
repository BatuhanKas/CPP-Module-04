/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 14:31:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ICE_HPP
#define ICE_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "AMateria.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] CAT CLASS [v] *************************** */

class Ice : public AMateria {
   public:
    /* **** [v] Orthodox Form [v] **** */
    Ice();
    Ice(const string _type);
    Ice(const Ice &oth);
    Ice &operator=(const Ice &oth);
    ~Ice();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void use(ICharacter &target);
    /* ****** [^] Functions [^] ****** */

    /* **** [v] Pure Virtual Func [v] **** */
    AMateria *clone() const;
    /* **** [^] Pure Virtual Func [^] **** */
};

/* *************************** [^] CAT CLASS [^] *************************** */

#endif