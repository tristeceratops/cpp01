/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:27:57 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 13:12:53 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie();
		std::string getName();
		void setName(std::string name);
		~Zombie();
		void announce(void);
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif