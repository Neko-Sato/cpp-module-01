/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:19:56 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/27 02:55:37 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string name);

	void set_name(std::string name);
	void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif