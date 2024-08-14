/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:45 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/14 16:38:22 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void debug();
		void info();
		void warning();
		void error();
};

typedef void(Harl::*pointToFunc)(void);