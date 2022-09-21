/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Zombie.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:48:39 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/21 19:06:53 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string name) {
	_name = name;
	this->announce();
}

Zombie::~Zombie() {
	std::cout << _name << std::endl;
}

Zombie::Zombie() {
}

void	Zombie::announce(void) const {
	std::cout << _name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}


