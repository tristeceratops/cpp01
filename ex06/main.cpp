/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:47 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/20 11:17:34 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc >= 2)
		harl.complain(argv[1]);
	else
		std::cout << "need a logs level" << std::endl;
	return 0;
}