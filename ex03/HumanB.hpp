/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:13:23 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/27 13:50:18 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
#define __WHUMAN_H__

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
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