/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 04:46:15 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/21 05:16:08 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <fstream>
#include <string>
#include <new>
#include <exception>
#include <stdexcept>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <algorithm>
#include <iterator>
#include <limits>
#include <typeinfo>
#include <cctype>

class MutantStack
{
	MutantStack();
	MutantStack(const MutantStack &src);
	~MutantStack();
	MutantStack &operator=(const MutantStack &src);
};

#endif
