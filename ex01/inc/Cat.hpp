/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:44 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 15:29:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef CAT_HPP
#define CAT_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Animal.hpp"
#include "Brain.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] CAT CLASS [v] *************************** */

class Cat : public Animal {
   private:
    Brain *brain;

   public:
    /* **** [v] Orthodox Form [v] **** */
    Cat();
    Cat(const Cat &oth);
    Cat &operator=(const Cat &oth);
    ~Cat();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void whoAmI() const;
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* *************************** [^] CAT CLASS [^] *************************** */

#endif