/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:18:36 by bkas              #+#    #+#             */
/*   Updated: 2024/07/12 16:44:58 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] MATERIA SOURCE [v] ************************* */

class MateriaSource : public IMateriaSource {
   private:
    AMateria* Materia[4];

   public:
    /* ***** [v] Orthodox Form [v] ***** */
    MateriaSource();
    MateriaSource(const MateriaSource& oth);
    MateriaSource& operator=(const MateriaSource& oth);
    ~MateriaSource();
    /* ***** [^] Orthodox Form [^] ***** */

    /* ******* [v] Functions [v] ******* */
    void learnMateria(AMateria*);
    AMateria* createMateria(string const& type);
    /* ******* [^] Functions [^] ******* */
};

/* ************************* [^] MATERIA SOURCE [^] ************************* */

#endif