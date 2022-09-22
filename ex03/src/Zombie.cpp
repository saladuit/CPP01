/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Zombie.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:48:39 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 19:35:24 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int		Zombie::_sizeHorde = 0;

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << _name << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
}

int		Zombie::getSizeHorde() {
	return (_sizeHorde);
}
void	Zombie::setName(std::string name) {
	_sizeHorde++;
	_name = name;
}
void	Zombie::announce(void) const {
	std::cout << _name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}


