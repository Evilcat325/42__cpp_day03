#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : max_hit_points(100U),
									   max_energy_points(100U),
									   melee_atkdmg(30U), ranged_atkdmg(20U),
									   armor_dmg_deduction(5U)
{
	this->name = name;
	this->type = "FR4G-TP";
	hit_points = 100;
	energy_points = 100;
	level = 1;
	std::cout << "FR4G-TP " << name << " initizaling..." << std::endl;
}

FragTrap::FragTrap(const unsigned int mxp, const unsigned int mep,
				   const unsigned int matkdmg, const unsigned int ratkdmg, const unsigned int armor) : max_hit_points(mxp), max_energy_points(mep), melee_atkdmg(matkdmg), ranged_atkdmg(ratkdmg), armor_dmg_deduction(armor)
{
}

FragTrap::FragTrap() : max_hit_points(100U),
					   max_energy_points(100U),
					   melee_atkdmg(30U), ranged_atkdmg(20U),
					   armor_dmg_deduction(5U)
{
	std::cout << "notype nonamed initizaling..." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << type << " " << name << " self destructing..." << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : max_hit_points(100U),
										  max_energy_points(100U),
										  melee_atkdmg(30U), ranged_atkdmg(20U),
										  armor_dmg_deduction(5U)
{
	std::cout << "copying fragtrap" << std::endl;
	*this = rhs;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "assigning fragtrap" << std::endl;
	this->name = rhs.name;
	this->type = rhs.type;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->level = rhs.level;
	return *this;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " at range, causing " << ranged_atkdmg
			  << " points of damage !" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " in melee range, causing " << melee_atkdmg
			  << " points of damage !" << std::endl;
}
void FragTrap::segFaultAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via SIGSEGV, causing " << 30
			  << " points of damage !" << std::endl;
}
void FragTrap::busErrorAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via SIGBUS, causing " << 25
			  << " points of damage !" << std::endl;
}
void FragTrap::doubleFreeAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via FREEFREE, causing " << 50
			  << " points of damage !" << std::endl;
}
void FragTrap::divisionByZeroAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via 0.0/0.0, attack failed"
			  << " emeny has infinity stones" << std::endl;
}
void FragTrap::theSnapAttack(std::string const &target)
{
	std::cout << type << " " << name
			  << " attacks " << target
			  << " via the Snap, causing... ";
	int servived = std::rand() % 2 == 1;
	if (servived)
		std::cout << "0 damage, " << target
				  << " not selected to VFXed" << std::endl;
	else
		std::cout << "infinite damages, " << target
				  << " target VFXed, burning money, buying gcp gpu cluster, mining bitcoin" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
	amount = amount > armor_dmg_deduction ? amount - armor_dmg_deduction : 0;
	amount = amount > hit_points ? hit_points : amount;
	hit_points -= amount;
	std::cout << type << " " << name
			  << " takes " << amount
			  << " points of damage " << std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	amount = amount + hit_points > max_hit_points
				 ? max_hit_points - hit_points
				 : amount;
	hit_points += amount;
	std::cout << type << " " << name
			  << " recover " << amount
			  << " points of HP " << std::endl;
}
void FragTrap::charge(unsigned int sec)
{
	sec = sec + energy_points > max_energy_points
			  ? max_energy_points - energy_points
			  : sec;
	energy_points += sec;
	std::cout << type << " " << name
			  << " recover " << sec
			  << " points of Energy " << std::endl;
}
void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static Attack_Fn attacks[] = {
		&FragTrap::segFaultAttack,
		&FragTrap::busErrorAttack,
		&FragTrap::doubleFreeAttack,
		&FragTrap::divisionByZeroAttack,
		&FragTrap::theSnapAttack};
	std::cout
		<< type << " " << name << " initiate random attack at " << target << std::endl;
	if (energy_points < 25U)
		std::cout << " No enough energy please charge " << std::endl;
	else
	{
		int random = std::rand() % (sizeof(attacks) / sizeof(Attack_Fn));
		(this->*attacks[random])(target);
		energy_points -= 25U;
	}
}
