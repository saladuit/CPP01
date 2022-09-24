/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanB.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:49:38 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 16:48:45 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB

#include <Weapon.hpp>
#include <iostream>

class HumanB {
public:
    HumanB(const std::string& name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon& weapon);

private:
    HumanB();
    Weapon* _weapon;
    std::string _name;
};

#endif
