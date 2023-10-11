/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:32:27 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/11 14:22:50 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap			ClapTrapDefaut;
	ClapTrap			name("toto");
	ClapTrap			name2("tata");
	ClapTrap			nameCopy(name);
	std::string const	name3("lulu");
	std::string	const 	name4("lala");

	std::cout << std::endl;
	name.attack(name3);
	name2.attack(name4);
	name.takeDamage(5);
	std::cout << "attributes of name :" << std::endl << "name = " << name.getName() << std:: endl << "hit points = " << name.getHitPoints() << std::endl << "Energy points = " << name.getenergyPoints() << std::endl << "attack damage = " << name.getattackDamage() << std::endl;
	name2.takeDamage(3);
	std::cout << "attributes of name2 :" << std::endl << "name = " << name2.getName() << std:: endl << "hit points = " << name2.getHitPoints() << std::endl << "Energy points = " << name2.getenergyPoints() << std::endl << "attack damage = " << name2.getattackDamage() << std::endl;
	name.beRepaired(2);
	name2.beRepaired(1);
	std::cout << std::endl;
	std::cout << "attributes of name :" << std::endl << "name = " << name.getName() << " // " << "hit points = " << name.getHitPoints() << " // " << "Energy points = " << name.getenergyPoints() << " // " << "attack damage = " << name.getattackDamage() << std::endl;
	std::cout << "attributes of name2 :" << std::endl << "name = " << name2.getName() << " // " << "hit points = " << name2.getHitPoints() << " // " << "Energy points = " << name2.getenergyPoints() << " // " << "attack damage = " << name2.getattackDamage() << std::endl;
	std::cout << std::endl;
	return (0);
}