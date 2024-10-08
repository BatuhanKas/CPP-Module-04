/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/13 14:46:12 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    /* ********* [v] Animal Class [v] ********* */
    cout << LIGHT_CYAN << "/* ************* [v] Ex00 [v] ************* */"
         << RESET << endl;
    cout << RED << "/* ********* [v] Animal Class [v] ********* */" << RESET
         << endl;
    try {
        /* ***** [v] Memory Allocation [v] ***** */
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        Cat* c1 = new Cat();
        /* ***** [^] Memory Allocation [^] ***** */

        /* ******* [v] Screen Output [v] ******* */
        meta->display();
        j->display();
        i->display();
        c1->display();
        /* ******* [^] Screen Output [^] ******* */

        /* ******* [v] Delete [v] ******* */
        delete c1;
        delete i;
        delete j;
        delete meta;
        /* ******* [^] Delete [^] ******* */
    } catch (const exception& e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    cout << RED << "/* ********* [^] Animal Class [^] ********* */" << RESET
         << endl;
    /* ********* [^] Animal Class [^] ********* */
    /* ****** [v] Wrong Animal Class [v] ****** */
    cout << RED << "/* ****** [v] Wrong Animal Class [v] ****** */" << RESET
         << endl;
    try {
        /* ***** [v] Memory Allocation [v] ***** */
        const WrongAnimal* wranimal = new WrongAnimal();
        const WrongAnimal* wrcat = new WrongCat();
        /* ***** [^] Memory Allocation [^] ***** */

        /* ******* [v] Screen Output [v] ******* */
        wranimal->display();
        wrcat->display();
        /* ******* [^] Screen Output [^] ******* */

        /* ******* [v] Delete [v] ******* */
        delete wrcat;
        delete wranimal;
        /* ******* [^] Delete [^] ******* */
    } catch (const exception& e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    cout << RED << "/* ****** [^] Wrong Animal Class [^] ****** */" << RESET
         << endl;
    cout << LIGHT_CYAN << "/* ************* [^] Ex00 [^] ************* */"
         << RESET << endl;
    /* ****** [^] Wrong Animal Class [^] ****** */
}

/* ****************************** [^] MAIN [^] ****************************** */