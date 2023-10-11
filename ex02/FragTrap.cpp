/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:49:50 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/11 14:08:38 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_nbOfHF = 0;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _nbOfHF = 0;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = other;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &c)
{
    std::cout << "Fonction operator = FragTrap called" << std::endl;
    _name = c._name;
    _hitPoints = c._hitPoints;
    _energyPoints = c._energyPoints;
    _attackDamage = c._attackDamage;
    return (*this);
}

void    FragTrap::attack(ClapTrap &target)
{
    std::cout << "Function attack FragTrap called" << std::endl;
	if (this->_energyPoints > 0)
    {
		std::cout  << "ScavTrap " << this->_name << " attacks " << target.getName() <<", causing " << _attackDamage << " points of damage " << std::endl;
        target.takeDamage(_attackDamage);
    }
	else
		std::cout << "You don't have energy Points" << std::endl;
	this->_energyPoints -= 1;
}

void    FragTrap::highFivesGuys(void)
{
    ClapTrap    clapTrap;
    
    std::cout << "function highFivesGuys FragTrap called" << std::endl;
    std::cout << "FragTap " << this->_name << " : " << "Hey its the end of war, give me five dude." << std::endl;
    this->_nbOfHF += 1;
}

int    FragTrap::getnbOfHF(void) const
{
    return (this->_nbOfHF);
}