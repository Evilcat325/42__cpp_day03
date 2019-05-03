#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

void test_basic(ClapTrap &subject)
{
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("CPP");
	subject.rangedAttack("Makefile");
	subject.charge(2000);
}
void test(ScavTrap &subject)
{
	test_basic(subject);
	for (int i = 0; i < 5; ++i)
		subject.challengeNewcomer();
}
void test(FragTrap &subject)
{
	test_basic(subject);
	for (int i = 0; i < 5; ++i)
		subject.vaulthunter_dot_exe("PDF");
	subject.charge(2000);
	for (int i = 0; i < 5; ++i)
		subject.vaulthunter_dot_exe("PDF");
}
int main()
{
	ScavTrap st("marvel");
	FragTrap ft("levram");
	std::srand(std::time(nullptr));
	test(ft);
	test(st);
	return 0;
}
