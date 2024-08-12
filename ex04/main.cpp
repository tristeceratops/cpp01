/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:38:40 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/12 18:04:40 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Error: must be ./sed <filename> <find> <replace>" << std::endl, 1);
	std::fstream file;
	file.open(argv[1]);
	if (!file.is_open())
		return (std::cout << "Error: file not found" << std::endl, 1);
	char ch;
	file.close();
}