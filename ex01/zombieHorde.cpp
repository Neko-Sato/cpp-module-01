/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:43:37 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:25:58 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *zombies;

  zombies = new Zombie[N];
  for (int i = 0; i < N; i++) zombies[i].set_name(name);
  return (zombies);
}
