/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:18:36 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 12:20:44 by bkas             ###   ########.fr       */
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
    int numLearned;

   public:
    /* ***** [v] Orthodox Form [v] ***** */
    MateriaSource();
    MateriaSource(const MateriaSource& oth);
    MateriaSource& operator=(const MateriaSource& oth);
    ~MateriaSource();
    /* ***** [^] Orthodox Form [^] ***** */

    /* **** [v] Set & Get Functions [v] **** */
    void setNumLearned(const int num);
    int getNumLearned() const;
    /* **** [^] Set & Get Functions [^] **** */

    /* ******* [v] Functions [v] ******* */
    void learnMateria(AMateria* ptr);
    AMateria* createMateria(string const& type);
    /* ******* [^] Functions [^] ******* */
};

/* ************************* [^] MATERIA SOURCE [^] ************************* */

#endif