/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Zombie.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:41:49 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 17:23:42 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie {

	public:
	Zombie(std::string name);
	void	announce(void) const;
	~Zombie();

	private:
	Zombie();
	std::string	_name;
};
#endif
