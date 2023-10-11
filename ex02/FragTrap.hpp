#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:

        FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &other);
		~FragTrap();
		FragTrap    &operator=(FragTrap const &c);
		void		attack(ClapTrap &target);
		void        highFivesGuys(void);
        int         getnbOfHF(void) const;

    private:

        int _nbOfHF;

};

#endif