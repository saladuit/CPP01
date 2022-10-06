/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/10/06 11:08:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void complain(std::string level)
{
    Harl H;

    H.complain(level);
}

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./Harl.out <Warning Level>"
                  << std::endl;
        return (0);
    }
    complain(argv[1]);
    return (0);

}
