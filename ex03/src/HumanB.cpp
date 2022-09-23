/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanB.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:17:36 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/23 12:00:17 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <cstddef>


void HumanB::setWeapon(const Weapon &weapon) {
	this->_weapon = &weapon;
}
HumanB::HumanB(const std::string &name) : _weapon(NULL), _name(name) {
}
HumanB::~HumanB() {
}
void HumanB::attack() const {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon.getType();
	std::cout << std::endl;
}
