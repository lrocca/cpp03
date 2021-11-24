/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:56 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/24 14:44:21 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default") {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was born" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was born" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other): ClapTrap(other) {
	std::cout << "DiamondTrap " << _name << " was copied" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " was destroyed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &other) {
	std::cout	<< "DiamondTrap " << _name << " is copied from " << other._name
				<< std::endl;

	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}

	return *this;
}

void	DiamondTrap::attack(std::string const &target) const {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const {
	std::cout	<< "My name is DiamondTrap " << _name
				<< ". My ClapTrap name is " << ClapTrap::_name << std::endl;
}
