/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:42 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/19 14:42:13 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	int index = -1;
	Harl harl;
	pointToFunc p[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string l[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (level == l[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0:
			std::cout << "[ " << l[0] << " ]" << std::endl;
			(harl.*p[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[ " << l[1] << " ]" << std::endl;
			(harl.*p[1])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ " << l[2] << " ]" << std::endl;
			(harl.*p[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ " << l[3] << " ]" << std::endl;
			(harl.*p[3])();
			std::cout << std::endl;
			break;		
		default:
			std::cout << "[ " << level << " ]" << std::endl;
			std::cout << "Wrong logs level, please refer to the manual of Harl" << std::endl;
			break;
	}
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;	
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}