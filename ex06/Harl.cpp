/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:42 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/16 14:11:07 by ewoillar         ###   ########.fr       */
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
	if (index >= 0)
		std::cout << "[ " << l[index] << " ]" << std::endl;
	switch (index)
	{
		case 0:
			(harl.*p[0])();
		case 1:
			(harl.*p[1])();
		case 2:
			(harl.*p[2])();
		case 3:
			(harl.*p[3])();
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