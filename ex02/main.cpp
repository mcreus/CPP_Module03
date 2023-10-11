/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:32:27 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/11 14:27:00 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap			name("toto");
	ClapTrap			name2("tata");
	ClapTrap			nameCopy(name);
	ScavTrap			name3("lulu");
	ScavTrap			name4("lolo");
	ScavTrap			copy(name3);
	FragTrap			name5("roro");
	FragTrap			name6("riri");
	FragTrap			copy1(name5);

	std::cout << std::endl;
	std::cout << "attributes of name :" << std::endl << "name = " << name.getName() << " // " << "hit points = " << name.getHitPoints() << " // " << "Energy points = " << name.getenergyPoints() << " // " << "attack damage = " << name.getattackDamage() << std::endl;
	std::cout << "attributes of name2 :" << std::endl << "name = " << name2.getName() << " // " << "hit points = " << name2.getHitPoints() << " // " << "Energy points = " << name2.getenergyPoints() << " // " << "attack damage = " << name2.getattackDamage() << std::endl;
	std::cout << "attributes of name3 :" << std::endl << "name = " << name3.getName() << " // " << "hit points = " << name3.getHitPoints() << " // " << "Energy points = " << name3.getenergyPoints() << " // " << "attack damage = " << name3.getattackDamage() << std::endl;
	std::cout << "attributes of name4 :" << std::endl << "name = " << name4.getName() << " // " << "hit points = " << name4.getHitPoints() << " // " << "Energy points = " << name4.getenergyPoints() << " // " << "attack damage = " << name4.getattackDamage() << std::endl;
	std::cout << "attributes of name5 :" << std::endl << "name = " << name5.getName() << " // " << "hit points = " << name5.getHitPoints() << " // " << "Energy points = " << name5.getenergyPoints() << " // " << "attack damage = " << name5.getattackDamage() << std::endl;
	std::cout << "attributes of name6 :" << std::endl << "name = " << name6.getName() << " // " << "hit points = " << name6.getHitPoints() << " // " << "Energy points = " << name6.getenergyPoints() << " // " << "attack damage = " << name6.getattackDamage() << std::endl;
	name3.attack(name);
	name4.attack(name2);
	name3.attack(name4);
	name3.attack(name4);
	name4.attack(name3);
	name4.attack(name3);
	name4.attack(name5);
	name3.attack(name6);
	name3.guardGate();
	name4.guardGate();
	std::cout << "attributes of name :" << std::endl << "name = " << name.getName() << " // " << "hit points = " << name.getHitPoints() << " // " << "Energy points = " << name.getenergyPoints() << " // " << "attack damage = " << name.getattackDamage() << std::endl;
	std::cout << "attributes of name2 :" << std::endl << "name = " << name2.getName() << " // " << "hit points = " << name2.getHitPoints() << " // " << "Energy points = " << name2.getenergyPoints() << " // " << "attack damage = " << name2.getattackDamage() << std::endl;
	std::cout << "attributes of name3 :" << std::endl << "name = " << name3.getName() << " // " << "hit points = " << name3.getHitPoints() << " // " << "Energy points = " << name3.getenergyPoints() << " // " << "attack damage = " << name3.getattackDamage() << std::endl;
	std::cout << "attributes of name4 :" << std::endl << "name = " << name4.getName() << " // " << "hit points = " << name4.getHitPoints() << " // " << "Energy points = " << name4.getenergyPoints() << " // " << "attack damage = " << name4.getattackDamage() << std::endl;
	std::cout << "attributes of name5 :" << std::endl << "name = " << name5.getName() << " // " << "hit points = " << name5.getHitPoints() << " // " << "Energy points = " << name5.getenergyPoints() << " // " << "attack damage = " << name5.getattackDamage() << std::endl;
	std::cout << "attributes of name6 :" << std::endl << "name = " << name6.getName() << " // " << "hit points = " << name6.getHitPoints() << " // " << "Energy points = " << name6.getenergyPoints() << " // " << "attack damage = " << name6.getattackDamage() << std::endl;
	name.beRepaired(20);
	name2.beRepaired(10);
	name3.beRepaired(30);
	name4.beRepaired(10);
	name3.guardGate();
	name4.guardGate();
	name5.highFivesGuys();
	std::cout << std::endl;
	std::cout << "attributes of name :" << std::endl << "name = " << name.getName() << " // " << "hit points = " << name.getHitPoints() << " // " << "Energy points = " << name.getenergyPoints() << " // " << "attack damage = " << name.getattackDamage() << std::endl;
	std::cout << "attributes of name2 :" << std::endl << "name = " << name2.getName() << " // " << "hit points = " << name2.getHitPoints() << " // " << "Energy points = " << name2.getenergyPoints() << " // " << "attack damage = " << name2.getattackDamage() << std::endl;
	std::cout << "attributes of name3 :" << std::endl << "name = " << name3.getName() << " // " << "hit points = " << name3.getHitPoints() << " // " << "Energy points = " << name3.getenergyPoints() << " // " << "attack damage = " << name3.getattackDamage() << std::endl;
	std::cout << "attributes of name4 :" << std::endl << "name = " << name4.getName() << " // " << "hit points = " << name4.getHitPoints() << " // " << "Energy points = " << name4.getenergyPoints() << " // " << "attack damage = " << name4.getattackDamage() << std::endl;
	std::cout << "attributes of name5 :" << std::endl << "name = " << name5.getName() << " // " << "hit points = " << name5.getHitPoints() << " // " << "Energy points = " << name5.getenergyPoints() << " // " << "attack damage = " << name5.getattackDamage() << std::endl;
	std::cout << "attributes of name6 :" << std::endl << "name = " << name6.getName() << " // " << "hit points = " << name6.getHitPoints() << " // " << "Energy points = " << name6.getenergyPoints() << " // " << "attack damage = " << name6.getattackDamage() << std::endl;
	std::cout << "numbers of guardian :" << std::endl << "name3 = " << name3.getNbGuardGate() << std::endl << "name4 = " << name4.getNbGuardGate() << std::endl;
	std::cout << "numbers of high five : " << name5.getnbOfHF() <<std::endl;
	std::cout << std::endl;
	return (0);
}