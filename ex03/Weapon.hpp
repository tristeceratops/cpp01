/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:30 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/19 13:55:46 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string t);
		~Weapon();
		void setType(std::string t);
		const std::string& getType();
	private:
		std::string type;
};

#endif