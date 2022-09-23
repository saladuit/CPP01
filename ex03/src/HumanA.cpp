/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanA.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:17:36 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/23 11:55:40 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <HumanA.hpp>


HumanA::HumanA(const std::string &name, const Weapon &type):
	_name(name), _weapon(type){
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon.getType();
	std::cout << std::endl;
}
