/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 10:43:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef DOG_HPP
#define DOG_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Animal.hpp"
#include "Brain.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] DOG CLASS [v] *************************** */

class Dog : public Animal {
   private:
    Brain *brain;

   public:
    /* **** [v] Orthodox Form [v] **** */
    Dog();
    Dog(const string idea);
    Dog(const Dog &oth);
    Dog &operator=(const Dog &oth);
    ~Dog();
    /* **** [^] Orthodox Form [^] **** */

    /* * [v] Get & Set Functions [v] * */
    void setBrain(const string idea);
    void setBrain(const Brain &oth);
    Brain &getBrain() const;
    /* * [^] Get & Set Functions [^] * */

    /* ****** [v] Functions [v] ****** */
    void display() const;
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] DOG CLASS [^] *************************** */

#endif