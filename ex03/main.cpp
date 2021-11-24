/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:01:44 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/24 16:00:39 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	caio("Caio"), noia("Noia"), jojo(caio), def;

	caio = noia;

	caio.attack("Ollo");
	noia.takeDamage(100);
	jojo.beRepaired(42);

	jojo = DiamondTrap("JOJO");
	jojo.guardGate();
	caio.highFivesGuys();

	noia.whoAmI();
}
