/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:27 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 16:25:51 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string t)
{
	type = t;
}

const std::string& Weapon::getType()
{
	return (type);
}