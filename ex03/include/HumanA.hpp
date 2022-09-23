/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanA.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:49:38 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/23 11:54:55 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

#include <Weapon.hpp>
#include <iostream>

class HumanA {
	public:
		HumanA(const std::string &name, const Weapon &type);
		~HumanA();
		void attack() const;

	private:
		std::string		_name;
		const Weapon	&_weapon;
};

#endif
