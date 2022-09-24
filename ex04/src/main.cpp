/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 22:00:24 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <replace.hpp>

int main(int argc, char** argv)
{

    if (argc != 4) {
        std::cout << "Usage: ./replace.out <filename> <s1> s2>"
                  << std::endl;
		return (0);
    }
    replace(argc - 1, argv + 1);
    return (0);
}
