/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:13:23 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:26:30 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon {
 private:
  std::string _type;

 public:
  Weapon(std::string type);
  ~Weapon();

  std::string const &getType() const;
  void setType(std::string const &type);
};

#endif
