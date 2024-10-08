/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 11:58:30 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef CAT_HPP
#define CAT_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] CAT CLASS [v] *************************** */

class Cat : public AAnimal {
   private:
    Brain *brain;

   public:
    /* **** [v] Orthodox Form [v] **** */
    Cat();
    Cat(const string idea);
    Cat(const Cat &oth);
    Cat &operator=(const Cat &oth);
    ~Cat();
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

/* *************************** [^] CAT CLASS [^] *************************** */

#endif