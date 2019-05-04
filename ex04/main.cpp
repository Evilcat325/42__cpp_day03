#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

void test_basic(ClapTrap &subject)
{
	std::cout << "--------BASIC TEST-----------" << std::endl;
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("CPP");
	subject.rangedAttack("Makefile");
	subject.charge(2000);
	std::cout << "-----------------------------" << std::endl;
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
void test(NinjaTrap &subject, ScavTrap &st, FragTrap &nt, ClapTrap &ct)
{
	test_basic(subject);
	subject.ninjaShoebox(subject);
	subject.ninjaShoebox(st);
	subject.ninjaShoebox(nt);
	subject.ninjaShoebox(ct);
}
int main()
{
	ScavTrap st("marvel");
	FragTrap ft("levram");
	NinjaTrap nt("just-ninja");
	ClapTrap ct(100U, 100U, 30U, 20U, 10U);
	std::srand(std::time(nullptr));
	test(ft);
	test(st);
	test(nt, st, ft, ct);
	return 0;
}
