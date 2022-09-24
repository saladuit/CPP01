/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 17:40:43 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <replace.hpp>

int main(int argc, char** argv)
{
    std::vector<std::string> allArgs(argv + 1, argv + argc);

    if (argc != 4) {
        std::cout << "Usage: ./replace.out <filename> <s1> s2>"
                  << std::endl;
    }
    replace(allArgs);
    return (0);
}
