/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanB.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/24 16:22:30 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 16:56:19 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

HumanB::HumanB(const std::string& name)
    : _weapon(0)
    , _name(name)
{
}

HumanB::~HumanB() { }

void HumanB::attack() const
{
    std::cout << _name;
    if (_weapon) {
        std::cout << " attacks with their ";
        std::cout << _weapon->getType();
        std::cout << std::endl;
    } else {
        std::cout << " has no weapon ";
        std::cout << std::endl;
    }
}
