/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   newZombie.cpp                                   |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 17:18:13 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 17:19:37 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie	*newZombie (std::string name) {
	return (new Zombie(name));
}
