/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:24:08 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/21 01:02:50 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    std::list<int> numbers;
    std::list<int> empty_list;
    std::vector<int> v_numbers;
    std::vector<int> empty;

	// for (int i = 0; i < 90000; i++)
	// {
	// 	numbers.push_back(i);
	// 	v_numbers.push_back(i);
	// }

	numbers.push_back(8);
	numbers.push_back(78541);
	numbers.push_back(1);
	numbers.push_back(0);
	numbers.push_back(-78);
	numbers.push_back(36);
	v_numbers.push_back(8);
	v_numbers.push_back(78541);
	v_numbers.push_back(1);
	v_numbers.push_back(0);
	v_numbers.push_back(-78);
	v_numbers.push_back(36);

	try
	{
		std::list<int>::iterator a = easyfind (numbers, -78);
		std::cout << *a << std::endl;
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}

	try
	{
		std::list<int>::iterator a = easyfind (empty_list, 36);
		std::cout << *a << std::endl;
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}

	try
	{
		std::vector<int>::iterator a = easyfind (v_numbers, 36);
		std::cout << *a << std::endl;
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}

	try
	{
		std::vector<int>::iterator a = easyfind (empty, 99);
		std::cout << *a << std::endl;
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}
}
