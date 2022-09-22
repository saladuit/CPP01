/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   randomChump.cpp                                 |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 17:20:04 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 17:21:51 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void	randomChump(std::string name) {
	Zombie randomChump(name);
	randomChump.announce();
}
