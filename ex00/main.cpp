/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:07:54 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/09 17:45:16 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	randomChump("Zombie2");
	delete zombie;
	return (0);
}