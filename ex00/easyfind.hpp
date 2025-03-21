/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:24:12 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/19 23:54:00 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

template <typename T>
typename T::iterator easyfind(T &src, int to_find)
{
	if (src.empty())
		throw ("!!!!EMPTY CONTAINER!!!!");
	typename T::iterator i = std::find (src.begin(), src.end(), to_find);
	if (i == src.end())
		throw ("VALUE NOT FOUND!!");
	return i;
}

#endif
