/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:04:34 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/11 13:17:31 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->_nbGuardGate = 0;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _nbGuardGate = 0;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = other;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &c)
{
    std::cout << "Fonction operator = ScavTrap called" << std::endl;
    _name = c._name;
    _hitPoints = c._hitPoints;
    _energyPoints = c._energyPoints;
    _attackDamage = c._attackDamage;
    return (*this);
}

void    ScavTrap::attack(ClapTrap &target)
{
    std::cout << "Function attack ScavTrap called" << std::endl;
	if (this->_energyPoints > 0)
    {
		std::cout  << "ScavTrap " << this->_name << " attacks " << ", causing " << _attackDamage << " points of damage " << std::endl;
        target.takeDamage(_attackDamage);
    }
    else
		std::cout << "You don't have energy Points" << std::endl;
	this->_energyPoints -= 1;
}

void    ScavTrap::guardGate()
{
    std::cout << "Function guardGate ScavTrap called" <<std::endl;
    std::cout << "ScavTrap is on mode Gate keeper" << std::endl;
    _energyPoints -= 1;
    this->_nbGuardGate += 1;
}

int			ScavTrap::getNbGuardGate() const
{
    return (this->_nbGuardGate);
}