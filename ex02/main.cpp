/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 04:46:18 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/22 06:28:28 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    MutantStack<int> mstack;
    MutantStack<int> mstack2;

    mstack.push(5);
    mstack.push(17);

    // std::cout << mstack.top() << std::endl; // 17

    mstack.pop();

    // std::cout << mstack.size() << std::endl; // 1

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack2 = mstack;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::iterator it2= mstack2.begin();
    MutantStack<int>::iterator ite2 = mstack2.end();

    while (it != ite) {
        std::cout << "stack1: " << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    while (it2 != ite2) {
        std::cout << "stack2: " << *it2 << std::endl;
        ++it2;
    }
    std::stack<int> s(mstack); // verify compatibility
}
