/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 03:14:30 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:27:00 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

const std::string Harl::logsstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Harl::debug(void) {
  std::cout << "[ DEBUG ]" << std::endl
            << "I love having extra bacon "
            << "for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
            << "I really do!" << std::endl
            << std::endl;
}

void Harl::info(void) {
  std::cout << "[ INFO ]" << std::endl
            << "I cannot believe adding extra bacon costs more money. "
            << "You didn’t put enough bacon in my burger! "
            << "If you did, I wouldn’t be asking for more!" << std::endl
            << std::endl;
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl
            << "I think I deserve to have some extra bacon for free. "
            << "I’ve been coming for years whereas you started working here "
               "since last month."
            << std::endl
            << std::endl;
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl
            << "This is unacceptable! "
            << "I want to speak to the manager now." << std::endl
            << std::endl;
}

void Harl::complain(std::string level) {
  size_t index;

  for (index = 0; index < 4; index++)
    if (logsstr[index] == level) break;
  switch (index) {
    case 0:
      debug();
      /* Falls through. */
    case 1:
      info();
      /* Falls through. */
    case 2:
      warning();
      /* Falls through. */
    case 3:
      error();
      /* Falls through. */
  }
}
