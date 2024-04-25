/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:19:56 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:25:40 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
 private:
  std::string _name;

 public:
  Zombie(std::string name = "");
  ~Zombie(void);

  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
