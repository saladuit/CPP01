/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/21 18:58:28 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 19:57:42 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	name("HI THIS BRAIN");
	std::string	*stringPTR = &name;
	std::string &stringREF = name;
	
	std::cout << "memory:\t" << &name << std::endl;
	std::cout << "memory:\t" << stringPTR << std::endl;
	std::cout << "memory:\t" << &stringREF << std::endl;
	std::cout << "value:\t" << name << std::endl;
	std::cout << "value:\t" << *stringPTR << std::endl;
	std::cout << "value:\t" << stringREF << std::endl;
	return (0);
}
