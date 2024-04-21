/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:27:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/21 18:08:25 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

std::string replaceAll(std::string string, std::string s1, std::string s2)
{
	std::string temp;
	size_t index;
	size_t start = 0;

	while ((index = string.find(s1, start)) != std::string::npos)
	{
		temp = string.substr(0, index);
		temp += s2;
		temp += string.substr(index + s1.size());
		start = index + s2.size();
		if (s1.empty())
			start++;
		string = temp;
	}
	return string;
}

void for_winner(std::string s1, std::string s2, std::string filename)
{
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
		throw std::runtime_error("open error: input file");
	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs.is_open())
		throw std::runtime_error("open error: output file");
	std::string str;
	while (std::getline(ifs, str))
	{
		ofs << replaceAll(str, s1, s2);
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
}

int main(int argc, char *argv[])
{
	try
	{
		if (argc == 4)
			for_winner(argv[1], argv[2], argv[3]);
		else if (argc < 4)
			throw std::runtime_error("Too fewer arguments");
		else
			throw std::runtime_error("Too many arguments");
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
