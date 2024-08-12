/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:04:12 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 16:07:57 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string n, Weapon& w);
		~HumanA();
		void attack();
	private:
		std::string name;
		Weapon& weapon;
};

#endif