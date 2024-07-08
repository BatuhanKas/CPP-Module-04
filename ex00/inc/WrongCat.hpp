/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:59:53 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 15:02:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "WrongAnimal.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************ [v] WRONG CAT CLASS [v] ************************ */

class WrongCat : public WrongAnimal {
   public:
    /* **** [v] Orthodox Form [v] **** */
    WrongCat();
    WrongCat(const WrongCat &oth);
    WrongCat &operator=(const WrongCat &oth);
    ~WrongCat();
    /* **** [^] Orthodox Form [^] **** */

    /* ****** [v] Functions [v] ****** */
    void whoAmI() const;
    void makeSound() const;
    /* ****** [^] Functions [^] ****** */
};

/* ************************ [^] WRONG CAT CLASS [^] ************************ */

#endif