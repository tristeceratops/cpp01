/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:06:14 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/19 13:59:18 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB();
		void setWeapon(Weapon& w);
		void attack();
	private:
		std::string name;
		Weapon *weapon;
};

#endif