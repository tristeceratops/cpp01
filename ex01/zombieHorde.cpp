/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:46:57 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/20 14:08:04 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "N must be positive" << std::endl;
		return NULL;
	}
	try
	{
		Zombie *horde = new Zombie[N];
		for (int i = 0; i < N; i++)
			horde[i].setName(name);
		return (horde);
	} catch (const std::bad_alloc& e) {
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return NULL;
	}
}