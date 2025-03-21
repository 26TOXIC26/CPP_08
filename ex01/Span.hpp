/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 02:05:43 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/21 02:20:30 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

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

class Span
{
	private:
		std::vector<int> numbers;
		unsigned int N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);
		void addNumber(int num);
		void addManyNumber(std::vector<int> nums);
		int shortestSpan();
		int longestSpan();
		void printNumbers();

};

#endif
