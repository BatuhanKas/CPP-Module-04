/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 11:54:58 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

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

/* ************************** [v] ANIMAL CLASS [v] ************************** */

class AAnimal {
   protected:
    string type;

   public:
    /* **** [v] Orthodox Form [v] **** */
    AAnimal();
    AAnimal(const AAnimal &oth);
    AAnimal &operator=(const AAnimal &oth);
    virtual ~AAnimal();
    /* **** [^] Orthodox Form [^] **** */

    /* **** [v] Get & Set Type [v] **** */
    void setType(const string _type);
    string getType() const;
    /* **** [^] Get & Set Type [^] **** */

    /* ****** [v] Functions [v] ****** */
    virtual void display() const = 0;
    virtual void makeSound() const = 0;
    /* ****** [^] Functions [^] ****** */
};

/* ************************** [^] ANIMAL CLASS [^] ************************** */

#endif