/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Weapon.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:41:07 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 17:00:14 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(const std::string& type)
    : _type(type)
{
}

Weapon::Weapon()
    : _type("")
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}
