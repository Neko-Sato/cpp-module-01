/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 03:00:50 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/20 19:44:24 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::setw(20) << std::left << "string address"
			  << ": " << &string << std::endl;
	std::cout << std::setw(20) << std::left << "stringPTR address"
			  << ": " << stringPTR << std::endl;
	std::cout << std::setw(20) << std::left << "stringREF address"
			  << ": " << &stringREF << std::endl;
	std::cout << std::setw(20) << std::left << "string value"
			  << ": " << string << std::endl;
	std::cout << std::setw(20) << std::left << "stringPTR value"
			  << ": " << *stringPTR << std::endl;
	std::cout << std::setw(20) << std::left << "stringREF value"
			  << ": " << stringREF << std::endl;
	return (0);
}
