/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/10/05 17:01:09 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void complain(void)
{
    Harl H;

    std::cout << std::endl;
    std::cout << "DEBUG LEVEL:" << std::endl;
    H.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "INFO LEVEL:" << std::endl;
    H.complain("INFO");
    std::cout << std::endl;
    std::cout << "WARNING LEVEL:" << std::endl;
    H.complain("WARNING");
    std::cout << std::endl;
    std::cout << "ERROR LEVEL:" << std::endl;
    H.complain("ERROR");
}

int main(int argc, char** argv)
{
    (void)argv;
    if (argc != 2) {
        std::cout << "Usage: ./Harl.out <Warning Level>"
                  << std::endl;
        return (0);
    }
    complain();
    return (0);

}
