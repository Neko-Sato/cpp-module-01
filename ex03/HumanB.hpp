/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:13:23 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:26:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_HPP__
#define __WHUMAN_HPP__

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 private:
  std::string _name;
  Weapon *_weapon;

 public:
  HumanB(std::string name);
  ~HumanB();

  void setWeapon(Weapon &weapon);

  void attack(void);
};

#endif
