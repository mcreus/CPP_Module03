#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();
		ScavTrap    &operator=(ScavTrap const &c);
		void		attack(ClapTrap &target);
		void		guardGate();
		int			getNbGuardGate() const;

	private:

		int	_nbGuardGate;
};

#endif