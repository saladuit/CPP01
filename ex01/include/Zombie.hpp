/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Zombie.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:41:49 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 19:36:39 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie {

	public:
	Zombie();
	~Zombie();
	Zombie(std::string name);

	void	setName(std::string name);

	void	announce(void) const;
	static int	getSizeHorde();

	private:

	std::string	_name;

	static int 	_sizeHorde;
};

#endif
