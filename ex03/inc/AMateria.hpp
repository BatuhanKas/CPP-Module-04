/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 14:41:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define YELLOW "\033[1;33m"
#define LIGHT_GREEN "\033[1;32m"
#define WHITE "\033[1;37m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"
#define LIGHT_CYAN "\033[1;36m"

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>

#include "ICharacter.hpp"

using std::cerr;
using std::cout;
using std::endl;
using std::exception;
using std::string;

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] AMATERIA CLASS [v] ************************* */

class AMateria {
   protected:
    string type;

   public:
    /* **** [v] Orthodox Form [v] **** */
    AMateria();
    AMateria(string const &type);
    AMateria(const AMateria &oth);
    AMateria &operator=(const AMateria &oth);
    virtual ~AMateria();
    /* **** [^] Orthodox Form [^] **** */

    /* **** [v] Get & Set Type [v] **** */
    void setType(const string _type);
    string const &getType() const;
    /* **** [^] Get & Set Type [^] **** */

    /* ****** [v] Functions [v] ****** */
    virtual void use(ICharacter &target);
    /* ****** [^] Functions [^] ****** */

    /* **** [v] Pure Virtual Func [v] **** */
    virtual AMateria *clone() const = 0;
    /* **** [^] Pure Virtual Func [^] **** */
};

/* ************************* [^] AMATERIA CLASS [^] ************************* */

#endif