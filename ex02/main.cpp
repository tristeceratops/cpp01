/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:23:04 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 14:00:42 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory adress of the string is:" << &str << std::endl;
	std::cout << "memory adress held by stringPTR is:" << stringPTR << std::endl;
	std::cout << "memory adress held by stringREF is:" << &stringREF << std::endl;

	std::cout << "value of the string is:" << str << std::endl;
	std::cout << "value pointed to by stringPTR is:" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF is:" << stringREF << std::endl;
}
