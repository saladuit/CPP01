/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanB.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:49:38 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/23 11:57:18 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB

#include <Weapon.hpp>
#include <iostream>

class HumanB {
	public:
		HumanB(const std::string &name);
		~HumanB();
		void attack() const;
		void setWeapon(const Weapon& weapon);
		

	private:
		const Weapon	&_weapon;
		std::string		_name;
};

#endif
