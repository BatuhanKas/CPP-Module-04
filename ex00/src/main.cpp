/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:51:45 by bkas              #+#    #+#             */
/*   Updated: 2024/07/08 14:02:26 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Animal.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    cout << LIGHT_CYAN << "/* ******* [v] Ex00 [v] ******* */" << RESET << endl;
    try {
        /* ***** [v] Memory Allocation [v] ***** */
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        Cat* c1 = new Cat();
        /* ***** [^] Memory Allocation [^] ***** */

        /* ******* [v] Screen Output [v] ******* */
        cout << WHITE << "Animal's type is: " << BLUE << meta->getType()
             << RESET << endl;
        cout << WHITE << "Dog's type is: " << BLUE << j->getType() << RESET
             << endl;
        cout << WHITE << "Cat1's type is: " << BLUE << i->getType() << RESET
             << endl;
        cout << WHITE << "Cat2's type is: " << BLUE << c1->getType() << RESET
             << endl;
        /* ******* [^] Screen Output [^] ******* */

        /* ******** [v] Make Sound [v] ******** */
        meta->makeSound();
        j->makeSound();
        i->makeSound();
        c1->makeSound();
        /* ******** [^] Make Sound [^] ******** */

        /* ******* [v] Delete [v] ******* */
        delete c1;
        delete i;
        delete j;
        delete meta;
        /* ******* [^] Delete [^] ******* */
    } catch (const exception& e) {
        cerr << "Memory Allocation Error: " << e.what() << endl;
    }
    cout << LIGHT_CYAN << "/* ******* [^] Ex00 [^] ******* */" << RESET << endl;
}

/* ****************************** [^] MAIN [^] ****************************** */