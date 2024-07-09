/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/09 12:28:12 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ANIMAL COUNTER [v] ************************* */

#define COUNTER 10

/* ************************* [^] ANIMAL COUNTER [^] ************************* */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    /* ************************ [v] Ex01 [v] ************************ */
    cout << LIGHT_CYAN << "/* ************* [v] Ex01 [v] ************* */"
         << RESET << endl;
    /* ***** [v] Counter Control [v] ***** */
    if (COUNTER < 2 || COUNTER % 2 != 0) {
        cout << WHITE << "---------------------------------------" << endl;
        cout << "---Counter have to be greater than 1---" << endl;
        cout << "---And divided by 2 must be 0---" << endl;
        cout << "---------------------------------------" << RESET << endl;
        return 0;
    }
    /* ***** [^] Counter Control [^] ***** */

    /* **** [v] Pointer Array [v] **** */
    AAnimal* animals[COUNTER];
    /* **** [^] Pointer Array [^] **** */

    try {
        /* ********* [v] Memory Allocation [v] ********* */
        for (int i = 0; i < COUNTER; i++) {
            if (i % 2 == 0)
                animals[i] = new Dog("Today's air is sunny!");
            else
                animals[i] = new Cat("Today's air is rainy!");
        }
        /* ********* [^] Memory Allocation [^] ********* */

        /* ********** [v] Screen Output [v] ********** */
        for (int i = 0; i < COUNTER; i++) animals[i]->display();
        /* ********** [^] Screen Output [^] ********** */

        /* ************* [v] Delete [v] ************* */
        for (size_t i = 0; i < COUNTER; i++) delete animals[i];
        /* ************* [^] Delete [^] ************* */

    } catch (exception& e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
        for (size_t i = 0; i < COUNTER; i++) delete animals[i];
    }
    cout << LIGHT_CYAN << "/* ************* [^] Ex01 [^] ************* */"
         << RESET << endl;
    /* ************************ [^] Ex01 [^] ************************ */
}

/* ****************************** [^] MAIN [^] ****************************** */