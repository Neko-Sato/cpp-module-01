/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:32:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:25:49 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  int N;
  Zombie *zombies;

  N = 3;
  zombies = zombieHorde(N, "Zombie");
  for (int i = 0; i < N; i++) zombies[i].announce();
  delete[] zombies;

  N = 0;
  zombies = zombieHorde(N, "Zombie");
  for (int i = 0; i < N; i++) zombies[i].announce();
  delete[] zombies;
  return (0);
}
