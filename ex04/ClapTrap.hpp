#ifndef FT_CLAPTRAP_HPP
#define FT_CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
  private:
	ClapTrap();

  protected:
	std::string name;
	std::string type;
	unsigned hit_points;
	unsigned energy_points;
	unsigned level;
	const unsigned int max_hit_points;
	const unsigned int max_energy_points;
	const unsigned int melee_atkdmg;
	const unsigned int ranged_atkdmg;
	const unsigned int armor_dmg_deduction;

  public:
	ClapTrap(const unsigned int mxp, const unsigned int mep,
			 const unsigned int matkdmg, const unsigned int ratkdmg, const unsigned int armor);
	~ClapTrap();
	ClapTrap(ClapTrap const &rhs);
	ClapTrap &operator=(ClapTrap const &rhs);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void charge(unsigned int sec);
};

#endif /* FT_ClapTrap_HPP */
