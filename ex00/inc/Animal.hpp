/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 12:12:31 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include <iostream>

using std::cout;
using std::endl;
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
    ~Animal();
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