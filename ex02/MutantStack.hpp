/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 04:46:15 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/22 06:41:04 by amousaid         ###   ########.fr       */
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

template <typename M>
class MutantStack : public std::stack<M>
{
	public:
		MutantStack(){};
		MutantStack(const MutantStack &src)
		{
			*this = src;
		};
		~MutantStack(){};
		MutantStack &operator=(const MutantStack &src)
		{
			std::stack<M>::operator=(src);
			return *this;
		}

		typedef typename std::stack<M>::container_type::iterator iterator;

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif
