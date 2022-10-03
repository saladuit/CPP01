/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/10/03 16:37:05 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void complain(void)
{
    Harl H;

    H.complain("DEBUG");
    H.complain("INFO");
    H.complain("WARNING");
    H.complain("ERROR");
}

int main(int argc, char** argv)
{
    (void)argv;
    if (argc != 1) {
        std::cout << "Usage: ./Harl.out"
                  << std::endl;
        return (0);
    }
    complain();
    return (0);

}
