/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 12:58:23 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

class Animal {
   protected:
    string type;

   public:
    /* **** [v] Orthodox Form [v] **** */
    Animal();
    Animal(const Animal &oth);
    Animal &operator=(const Animal &oth);
    virtual ~Animal();
    /* **** [^] Orthodox Form [^] **** */

    /* **** [v] Get & Set Type [v] **** */
    void setType(const string _type);
    string getType() const;
    /* **** [^] Get & Set Type [^] **** */

    /* ****** [v] Functions [v] ****** */
    virtual void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* ************************** [^] ANIMAL CLASS [^] ************************** */

/* *************************** [v] CAT CLASS [v] *************************** */

class Cat : public Animal {
   public:
    /* **** [v] Orthodox Form [v] **** */
    Cat();
    Cat(const Cat &oth);
    Cat &operator=(const Cat &oth);
    ~Cat();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] CAT CLASS [^] *************************** */

/* *************************** [v] DOG CLASS [v] *************************** */

class Dog : public Animal {
   public:
    /* **** [v] Orthodox Form [v] **** */
    Dog();
    Dog(const Dog &oth);
    Dog &operator=(const Dog &oth);
    ~Dog();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] DOG CLASS [^] *************************** */

#endif