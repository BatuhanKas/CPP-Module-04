/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 14:39:18 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/MateriaSource.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    /* ************************ [v] Ex03 [v] ************************ */
    cout << LIGHT_CYAN << "/* ************* [v] Ex03 [v] ************* */"
         << RESET << endl;
    try {
        /* ***** [v] Memory Allocation [v] ***** */
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");
        Character batu("Batu");
        AMateria* arr[] = {new Ice(), new Cure(), new Cure()};
        for (size_t i = 0; i < 3; i++) {
            batu.equip(arr[i]);
            batu.use(i, *me);
        }

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);

        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");
        /* ***** [^] Memory Allocation [^] ***** */

        /* **** [v] Display [v] **** */
        me->use(0, *bob);
        me->use(1, *bob);
        /* **** [^] Display [^] **** */

        /* ***** [v] Delete [v] ***** */
        delete bob;
        delete me;
        delete src;
        /* ***** [^] Delete [^] ***** */
        cout << LIGHT_CYAN << "/* ************* [^] Ex03 [^] ************* */"
             << RESET << endl;
    } catch (const exception& e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    /* ************************ [^] Ex03 [^] ************************ */
}

/* ****************************** [^] MAIN [^] ****************************** */