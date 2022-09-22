/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanB.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:17:36 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 21:42:25 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>


void HumanB::setWeapon(Weapon& weapon) {
	_weapon = weapon;
}
HumanB::HumanB(std::string name) : _name(name) {
}
HumanB::~HumanB() {
}
void HumanB::attack() const {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon.getType();
	std::cout << std::endl;
}

HumanB::HumanB() {
}
