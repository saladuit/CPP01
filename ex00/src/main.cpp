/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:58:28 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 18:21:52 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <exception>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void) {
	Zombie	*zombie;

	try {
	zombie = newZombie("newZombie");
	zombie->announce();
	delete zombie;
	}
	catch ( std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	randomChump("randomChump");
	return (0);
}
