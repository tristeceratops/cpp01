/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoillar <ewoillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:38:40 by ewoillar          #+#    #+#             */
/*   Updated: 2024/08/14 15:41:03 by ewoillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Error: must be ./sed <filename> <find> <replace>" << std::endl, 1);
	if (std::string(argv[1]).empty() || 
        std::string(argv[2]).empty() || 
        std::string(argv[3]).empty())
		return (std::cerr << "Value can't be empty string!" << std::endl, 1);
	std::fstream file;
	std::fstream file_replace;
	std::string line;
	std::string filename = argv[1];
    std::string find = argv[2];
    std::string replace = argv[3];
	std::string replace_filename = filename + ".replace";
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
		return (std::cerr << "Error: file not found or insufficient permissions to read the file." << std::endl, 1);
	file_replace.open(replace_filename.c_str(), std::ios::out);
	if (!file_replace.is_open())
		return (std::cerr << "Error: could not create or write in file. Check if you have write permissions." << std::endl, file.close(), 1);
	while (getline(file, line))
	{
		std::string new_line;
		size_t pos = 0;
		while ((pos = line.find(find, pos))!= std::string::npos)
		{
			new_line.append(line, 0, pos);
			new_line.append(replace);
			line = line.substr(pos + find.length());
			pos = 0;
		}
		new_line.append(line);
		file_replace << new_line << std::endl;
	}
	file.close();
	file_replace.close();
}