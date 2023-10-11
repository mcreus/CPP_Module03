/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:06:39 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/11 13:37:21 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
{
	std::cout << "Default Constructor ClapTrap called " << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 20;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor ClapTrap called " << std::endl;
	*this = other;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout  << " Destructor ClapTrap called " << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "Function attack called" << std::endl;
	if (this->_energyPoints > 0)
		std::cout  << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage " << std::endl;
	else
		std::cout << "You don't have energy Points" << std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Function takeDamage called" << std::endl;
	if ((this->_hitPoints -= amount) < 0)
	{
		this->_hitPoints = 0;
		this->_energyPoints = 0;
		this->_attackDamage = 0;
		std::cout << this->_name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damages" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Function beRepaired called" << std::endl;
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " have recupered " << amount << " life" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		return ;
}

std::string const	ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getenergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getattackDamage(void) const
{
	return (this->_attackDamage);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &c)
{
	std::cout << "Function operator = called" << std::endl;
	
	this->_name = c._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &c)
{
	std::cout << "Operator << called" << std::endl;
	
	o << c.getName();
	o << c.getHitPoints();
	o << c.getenergyPoints();
	o << c.getattackDamage();
	
	return (o);
}