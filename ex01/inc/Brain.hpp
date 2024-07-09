/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:23:15 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 20:44:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v] *************************** */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* *************************** [^] INCLUDES [^] *************************** */

/* ************************** [v] BRAIN CLASS [v] ************************** */

class Brain {
   private:
    string ideas[100];

   public:
    /* **** [v] Orthodox Form [v] **** */
    Brain();
    Brain(string idea);
    Brain(const Brain &oth);
    Brain &operator=(const Brain &oth);
    ~Brain();
    /* **** [^] Orthodox Form [^] **** */

    /* **** [v] Get & Set Idea [v] **** */
    void setIdea(const string _idea);
    void setIdea(size_t i, const string _idea);
    string getIdea() const;
    string getIdea(size_t i) const;
    /* **** [^] Get & Set Idea [^] **** */
};

/* ************************** [^] BRAIN CLASS [^] ************************** */

#endif