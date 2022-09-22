/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   zombieHorde.cpp                                 |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 17:18:13 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 19:40:25 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie	*zombieHorde (int N, std::string name) {
	Zombie *horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
