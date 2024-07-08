/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:54:28 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 15:06:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

using std::cerr;
using std::cout;
using std::endl;
using std::exception;
using std::string;

/* **************************** [^] INCLUDES [^] **************************** */

/* *********************** [v] WRONG ANIMAL CLASS [v] *********************** */

class WrongAnimal {
   protected:
    string type;

   public:
    /* **** [v] Orthodox Form [v] **** */
    WrongAnimal();
    WrongAnimal(const WrongAnimal &oth);
    WrongAnimal &operator=(const WrongAnimal &oth);
    virtual ~WrongAnimal();
    /* **** [^] Orthodox Form [^] **** */

    /* **** [v] Get & Set Type [v] **** */
    void setType(const string _type);
    string getType() const;
    /* **** [^] Get & Set Type [^] **** */

    /* ****** [v] Functions [v] ****** */
    void whoAmI() const;
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* *********************** [^] WRONG ANIMAL CLASS [^] *********************** */

#endif