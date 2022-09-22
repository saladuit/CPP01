/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   HumanA.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:49:38 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 21:41:50 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

#include <Weapon.hpp>
#include <iostream>

class HumanA {
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA();
		void attack() const;

	private:
		HumanA();
		std::string	_name;
		Weapon		_weapon;
};

#endif
