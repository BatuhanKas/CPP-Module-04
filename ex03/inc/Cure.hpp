/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:23:15 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 14:31:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef CURE_HPP
#define CURE_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v] *************************** */

#include "AMateria.hpp"

/* *************************** [^] INCLUDES [^] *************************** */

/* ************************** [v] BRAIN CLASS [v] ************************** */

class Cure : public AMateria {
   public:
    /* **** [v] Orthodox Form [v] **** */
    Cure();
    Cure(const string _type);
    Cure(const Cure &oth);
    Cure &operator=(const Cure &oth);
    ~Cure();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void use(ICharacter &target);
    /* ****** [^] Functions [^] ****** */

    /* **** [v] Pure Virtual Func [v] **** */
    AMateria *clone() const;
    /* **** [^] Pure Virtual Func [^] **** */
};

/* ************************** [^] BRAIN CLASS [^] ************************** */

#endif