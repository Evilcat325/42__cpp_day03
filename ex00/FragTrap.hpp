#ifndef FT_FRAGTRAP_HPP
#define FT_FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class FragTrap
{
  private:
	std::string name;
	unsigned hit_points;
	unsigned energy_points;
	unsigned level;
	const unsigned int max_hit_points;
	const unsigned int max_energy_points;
	const unsigned int melee_atkdmg;
	const unsigned int ranged_atkdmg;
	const unsigned int armor_dmg_deduction;

  public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(FragTrap const &rhs);
	FragTrap &operator=(FragTrap const &rhs);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void segFaultAttack(std::string const &target);
	void busErrorAttack(std::string const &target);
	void doubleFreeAttack(std::string const &target);
	void divisionByZeroAttack(std::string const &target);
	void theSnapAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void charge(unsigned int sec);
	void vaulthunter_dot_exe(std::string const &target);
};

typedef void (FragTrap::*Attack_Fn)(std::string const &target);

#endif /* FT_FragTrap_HPP */
