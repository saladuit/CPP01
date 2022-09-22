/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:58:28 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 19:45:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <exception>

Zombie*	zombieHorde(int N, std::string name);

int	main(void) {
	Zombie	*horde;

	horde = zombieHorde(420, "Generic Zombie");
	for (int i = 0; i < horde->getSizeHorde(); i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
