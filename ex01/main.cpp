/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:32:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/20 16:30:34 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N;
	Zombie *zombies;

	N = 3;
	zombies = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;

	N = 0;
	zombies = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
