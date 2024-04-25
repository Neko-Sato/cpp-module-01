/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 03:14:30 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:26:51 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

const std::string Harl::logsstr[4] = {"debug", "info", "warning", "error"};

Harl::Harl(void) {
  _logs[0] = &Harl::debug;
  _logs[1] = &Harl::info;
  _logs[2] = &Harl::warning;
  _logs[3] = &Harl::error;
}

void Harl::debug(void) {
  std::cout << "I love having extra bacon "
            << "for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
            << "I really do!" << std::endl;
}

void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. "
            << "You didn’t put enough bacon in my burger! "
            << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. "
            << "I’ve been coming for years whereas you started working here "
               "since last month."
            << std::endl;
}

void Harl::error(void) {
  std::cout << "This is unacceptable! "
            << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
  size_t index;

  for (index = 0; index < 4; index++)
    if (logsstr[index] == level) break;
  if (index == 4) return;
  return (this->*_logs[index])();
}
