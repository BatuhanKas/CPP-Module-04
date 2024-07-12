/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:44:05 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 12:01:36 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v] *************************** */

#include "ICharacter.hpp"

/* *************************** [^] INCLUDES [^] *************************** */

/* *********************** [v] CHARACTER CLASS [v] *********************** */

class Character : public ICharacter, public AMateria {
   private:
    string name;
    AMateria* inv[4];

   public:
    /* **** [v] Orthodox Form [v] **** */
    Character();
    Character(const string _name);
    Character(const Character& oth);
    Character& operator=(const Character& oth);
    ~Character();
    /* **** [^] Orthodox Form [^] **** */

    /* ** [v] Get & Set Functions [v] ** */
    string const& getName() const;
    void setName(const string _name);
    /* ** [^] Get & Set Functions [^] ** */

    /* ****** [v] Functions [v] ****** */
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    /* ****** [^] Functions [^] ****** */
};

/* *********************** [^] CHARACTER CLASS [^] *********************** */

#endif