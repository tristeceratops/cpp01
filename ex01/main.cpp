/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:07:54 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 13:15:56 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 4;
	Zombie *horde = zombieHorde(N, "René");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
