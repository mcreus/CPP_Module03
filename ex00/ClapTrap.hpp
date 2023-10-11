#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>

class ClapTrap
{
    public:

        ClapTrap();
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const &other);
        ~ClapTrap();
        void				attack(std::string const &target);
        void				takeDamage(unsigned int amount);
        void				beRepaired(unsigned int amount);
        std::string const	getName(void) const;
        int					getHitPoints(void) const;
		int					getenergyPoints(void) const;
		int					getattackDamage(void) const;
        ClapTrap			&operator=(ClapTrap const &c);

    private:

        std::string		_name;
        unsigned int 	_hitPoints;
        unsigned int 	_energyPoints;
        unsigned int 	_attackDamage;

};

std::ostream    &operator<<(std::ostream o, ClapTrap const &c);

#endif